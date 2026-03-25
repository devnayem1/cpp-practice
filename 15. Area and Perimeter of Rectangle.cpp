#include <iostream>
using namespace std;

int main() {
    float l, w, area, perimeter;
    cout << "Enter length and width: ";
    cin >> l >> w;
    area = l * w;
    perimeter = 2 * (l + w);
    cout << "Area: " << area << ", Perimeter: " << perimeter << endl;
    return 0;
}
