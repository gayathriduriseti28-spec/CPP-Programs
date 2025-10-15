//Write a c++ program to create a base class person with datamembers Name,Age and a derived class student that adds rollno and class display student details.
#include <iostream>
using namespace std;
// Base class Person
class Person {
public:
    string name;
    int age;
};
// Derived class Student
class Student : public Person {
public:
    int rollNo;
    string studentClass;

    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "Class: " << studentClass << endl;
    }
};

int main() {
    Student s;
    // Assign values
    s.name = "Gayathri";
    s.age = 19;
    s.rollNo = 27;
    s.studentClass = "B.Tech IT";
    // Display details
    s.display();
    return 0;
}


