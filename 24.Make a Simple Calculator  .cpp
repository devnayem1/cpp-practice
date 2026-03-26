#include <iostream>
using namespace std;

int main() {
    char op;
    float a, b;

    cout << "Enter operator (+ - * /): ";
    cin >> op;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    switch(op) {
        case '+': cout << a + b; break;
        case '-': cout << a - b; break;
        case '*': cout << a * b; break;
        case '/': cout << a / b; break;
        default: cout << "Invalid Operator";
    }

    return 0;
}
