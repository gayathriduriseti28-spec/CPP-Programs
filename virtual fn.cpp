//Virtual Base Class
#include<iostream>
using namespace std;
class A {
	public:
	void display()
	{
		cout<<"Class A display()"<<endl;
	}
};
class B:virtual public A {
	void show() {
		cout<<"Class B display()"<<endl;
	}
};
class C:virtual public A{
	void show() {
		cout<<"Class C display()"<<endl;
	}
};
class D:public B,public C {
	void show() {
		cout<<"Class D display()"<<endl;
	}
};
int main()
{
	D d;
	d.display();
	return 0;
	
}

