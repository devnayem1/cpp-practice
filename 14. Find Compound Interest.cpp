#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float p, r, t, ci;
    cout << "Enter Principal, Rate, and Time: ";
    cin >> p >> r >> t;
    ci = p * (pow((1 + r / 100), t)) - p;
    cout << "Compound Interest: " << ci << endl;
    return 0;
}
