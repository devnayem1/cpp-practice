#include <iostream>
using namespace std;

int main() {
    int n, rem, sum, original;

    cout << "Armstrong numbers between 1 to 1000:\n";

    for(n = 1; n <= 1000; n++) {
        sum = 0;
        original = n;

        while(original != 0) {
            rem = original % 10;
            sum += rem * rem * rem;
            original /= 10;
        }

        if(sum == n)
            cout << n << " ";
    }

    return 0;
}
