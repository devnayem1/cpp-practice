#include <iostream>
using namespace std;

int main() {
    int start, end, n, rem, sum, original;

    cout << "Enter start and end: ";
    cin >> start >> end;

    for(n = start; n <= end; n++) {
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
