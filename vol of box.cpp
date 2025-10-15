//create a class box with private dimensions (l,b,h) by using  private access specifier write a friend function to calculate the volume of a box.
#include <iostream>
using namespace std;
class Box {
private:
    float length, breadth, height; 
public:
    Box(float l, float b, float h) {
        length = l;
        breadth = b;
        height = h;
    }
    friend void calculateVolume(Box b);
};
void calculateVolume(Box b) {
    float volume = b.length * b.breadth * b.height;
    cout << "Volume of Box: " << volume << endl;
}
int main() {
    Box b1(5.0, 3.0, 2.0);   
    calculateVolume(b1);    
    Box b2(7.5, 4.2, 3.5);
    calculateVolume(b2);
    return 0;
}

