#include <iostream>
using namespace std;

struct Complex {
    float real;
    float imag;
};

int main() {
    Complex n1, n2, sum;
    cout << "Enter real and imaginary parts of 1st complex number: ";
    cin >> n1.real >> n1.imag;
    cout << "Enter real and imaginary parts of 2nd complex number: ";
    cin >> n2.real >> n2.imag;

    sum.real = n1.real + n2.real;
    sum.imag = n1.imag + n2.imag;

    cout << "Sum = " << sum.real << " + " << sum.imag << "i" << endl;
    return 0;
}
