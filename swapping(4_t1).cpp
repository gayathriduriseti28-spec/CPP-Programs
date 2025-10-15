/*//swap 2 values using fn templates.
#include <iostream>
using namespace std;
// Function template for swapping two values
template <typename T>
void swapValues(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}
int main() {
    int x = 10, y = 20;
    cout << "Before swapping: x = " << x << ", y = " << y << endl;
    swapValues(x, y);
    cout << "After swapping:  x = " << x << ", y = " << y << endl;
    double p = 1.5, q = 2.8;
    cout << "\nBefore swapping: p = " << p << ", q = " << q << endl;
    swapValues(p, q);
    cout << "After swapping:  p = " << p << ", q = " << q << endl;

    return 0;
}*/
//find the largest of 2 numbers using fn template.
#include <iostream>
using namespace std;
// Function template to find largest of two numbers
template <typename T>
T largest(T a, T b) {
    return (a > b) ? a : b;
}

int main() {
    int x, y;
    cout << "Enter two integers: ";
    cin >> x >> y;
    cout << "Largest (int): " << largest(x, y) << endl;

    double p, q;
    cout << "\nEnter two decimal numbers: ";
    cin >> p >> q;
    cout << "Largest (double): " << largest(p, q) << endl;

    return 0;
}


