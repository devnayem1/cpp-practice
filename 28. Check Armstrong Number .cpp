#include <iostream>
using namespace std;

int main() {
    int n, original, rem, result = 0;

    cout << "Enter number: ";
    cin >> n;

    original = n;

    while(n != 0) {
        rem = n % 10;
        result += rem * rem * rem;
        n /= 10;
    }

    if(result == original)
        cout << "Armstrong Number";
    else
        cout << "Not Armstrong Number";

    return 0;
}
