//Design a class circle with appropriate radius and write a friend function to calculate and display area of circle.
#include <iostream>
using namespace std;
class Circle {
    float radius; 
public:
    Circle(float r) {
        radius = r;
    }
    friend void findArea(Circle c);
};
void findArea(Circle c) {
    float area = 3.14159 * c.radius * c.radius;
    cout << "Area of Circle: " << area << endl;
}
int main() {
    Circle c1(5.0);   
    findArea(c1);     
    Circle c2(7.5);   
    findArea(c2);
    return 0;
}

