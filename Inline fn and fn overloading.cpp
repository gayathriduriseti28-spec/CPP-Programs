//Inline functions and function overloading.
#include<iostream>
using namespace std;
inline int add(int a,int b) {
	return a+b;
}
inline double add(double a,double b) {
	return a+b;
}
inline int add(int a,int b, int c) {
	return a+b+c;
}
int main() {
	cout<<"add(15,20)="<<add(15,20)<<endl;
	cout<<"add(3.5,6.5)="<<add(3.5,6.5)<<endl;
	cout<<"add(6,5,9)="<<add(6,5,9)<<endl;
	return 0;
}
