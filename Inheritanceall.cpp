/*//SINGLE INHERITANCE
#include<iostream>
using namespace std;
class animal
{
	public:
		void eat()
		{
			cout<<"Animal is eating."<<endl;
		}
};
class dog:public animal
{
	public:
		void bark()
		{
			cout<<"Dog is barking."<<endl;
		}
};
int main()
{
	dog d;
	d.eat();
	d.bark();
} */

/*//MULTIPLE INHERITANCE
#include<iostream>
using namespace std;
class A
{
	public:
		void displayA()
		{
			cout<<"ClassA"<<endl;
		}
};
class B
{
	public:
		void displayB()
		{
			cout<<"Class B"<<endl;
		}
};
class C:public A,public B
{
	public:
		void displayC()
		{
			cout<<"Class C"<<endl;
		}
};
int main()
{
	C c;
	c.displayA();
	c.displayB();
	c.displayC();
	return 0;
}*/

/*//MULTILEVEL INHERITANCE
#include<iostream>
using namespace std;
class A
{
	public:
		void displayA()
		{
			cout<<"Class A"<<endl;
		}
};
class B:public A
{
	public:
		void displayB()
		{
			cout<<"Class B"<<endl;
		}
};
class C:public B
{
	public:
		void displayC()
		{
			cout<<"Class C"<<endl;
		}
};
int main()
{
	C c;
	c.displayA();
	c.displayB();
	c.displayC();
	return 0;
}*/


/*//hierarchial inheritance
#include<iostream>
using namespace std;
class A;
{
	public:
		void displayA()
		{
			cout<<"Class A"<<endl;
		}
};
class B:public A
{
	public:
		void displayB()
		{
			cout<<"Class B"<<endl;
		}
};
class C:public A
{
	public:
		void displayC()
		{
			cout<<"Class C"<<endl;
		}
};
int main()
{
	B b;
	C c;
	b.displayA();
	b.displayB();
	c.displayC();
	return 0;
}*/

/*//MULTIHYBRID INHERITANCE
#include<iostream>
using namespace std;
class A
{
	public:
		void displayA()
		{
			cout<<"Class A"<<endl;
		}
};
class B:public A
{
	public:
		void displayB()
		{
			cout<<"Class B"<<endl;
		}
};
class C:public B
{
	public:
		void displayC()
		{
			cout<<"Class C"<<endl;
		}
};
class D:public B
{
	public:
		void displayD()
		{
			cout<<"Class D"<<endl;
		}
};
int main()
{
	C c;
	D d;
	c.displayA();
	c.displayB();
	c.displayC();
	d.displayD();
	return 0;
}*/

//ORDER OF EXECUTION OF CONSTRUCTOR AND DESTRUCTOR IN INHERITANCE.
#include<iostream>
using namespace std;
class base
{
	public:
		base()
		{
			cout<<"Base class constructor called"<<endl;
		}
		~base()
		{
			cout<<"Base class constructor called"<<endl;
		}
};
class derived:public base
{
	public:
		derived()
		{
			cout<<"Derived class constructor called"<<endl;
		}
		~derived()
		{
			cout<<"Derived class destructor called"<<endl;
		}
};
int main()
{
	derived d;
	return 0;
}



