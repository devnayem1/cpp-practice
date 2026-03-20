#include <iostream>
using namespace std;

int main() {
    int n, i, j, isPrime;
    cout << "Enter the value of N: ";
    cin >> n;

    for (i = 2; i <= n; i++) {
        isPrime = 1;
        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                isPrime = 0;
                break;
            }
        }
        if (isPrime) cout << i << " ";
    }
    return 0;
}
