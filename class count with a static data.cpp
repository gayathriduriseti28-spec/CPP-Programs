//Write a class count with a static data member count,increment count in each object created.
#include <iostream>
using namespace std;
class Count {
    static int count;  
public:
    Count() {
        count++;  
    }
    static void showCount() {
        cout << "Number of objects created: " << count << endl;
    }
};
int Count::count = 0;
int main() {
    Count c1, c2, c3;
    Count::showCount();  
    Count c4;
    Count::showCount();  
    return 0;
}

