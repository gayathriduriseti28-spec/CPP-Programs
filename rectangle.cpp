#include <iostream>
using namespace std;

int main() {
    float l, b, a, p;

    cout << "Enter length: ";
    cin >> l;

    cout << "Enter breadth: ";
    cin >> b;

    a = l * b;
    p = 2 * (l + b);

    cout << "Area of rectangle = " << a << endl;
    cout << "Perimeter of rectangle = " << p << endl;

    return 0;
}

