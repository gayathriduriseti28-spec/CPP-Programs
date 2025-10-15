//Factorial,square,cube of a number.
#include<iostream>
using namespace std;
class Math {
public:
    static int factorial(int n) {
        int fact = 1;
        for(int i = 1; i <= n; ++i) {
            fact *= i;
        }
        return fact;
    }
    static int square(int n) {
        return n * n;
    }
    static int cube(int n) {
        return n * n * n;
    }
};

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Factorial of " << num << " = " << Math::factorial(num) << endl;
    cout << "Square of " << num << " = " << Math::square(num) << endl;
    cout << "Cube of " << num << " = " << Math::cube(num) << endl;

    return 0;
}

