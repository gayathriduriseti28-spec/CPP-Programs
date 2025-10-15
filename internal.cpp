/*//single
#include<iostream>
#include<conio.h>
using namespace std;
class BC{
	public:
		int x,y;
		void getxy(){
			x=10;
			y=20;
			cout<<"X="<<x<<endl;
			cout<<"Y="<<y<<endl;
		}
};
class DC:public BC{
	int total;
	public
	void add()
	{
		total=x+y;
		cout<<"add="<<total<<endl;
	}		
};
int main()
{
	DC obj;
	obj.getxy();
	obj.add();
	return 0;
	getch();
}*/
/*//multi level
#include<iostream>
#include<conio.h>
using namespace std;
class BC{
	public:
	int x;
	void getx()
	{
		x=10;
		cout<<"X="<<x<<endl;
	}
};
class DC1:public BC{
public:
int y;
void gety()
{
	y=50;
	cout<<"Y="<<y<<endl;
}
};
class DC2:public DC1{
public:
int total;
void add()
{
total=x+y;
cout<<"add="<<total<<endl;
}
};
int main()
{
DC2 obj;
obj.getx();
obj.gety();
obj.add();
return 0;
getch();
}*/
/*//MULTIPLE INHERITANCE
#include<iostream>
#include<conio.h>
using namespace std;
class BC1{
public:
int x;
void getx()
{
x=10;
cout<<"x="<<x<<endl;
}
};
class BC2{
public:
int y;
void gety()
{
y=20;
cout<<"y="<<y<<endl;
}
};
class DC:public BC1,public BC2
{
public:
int total;
void add()
{
total=x+y;
cout<<"addition="<<total<<endl;
}
};
int main()
{
DC obj;
obj.getx();
obj.gety();
obj.add();
return 0;
getch();
}*/
/*//HIERARCHIAL 
#include<iostream>
#include<conio.h>
using namespace std;
class BC{
public:
int x,y;
void getxy()
{
x=10;
y=20;
cout<<"x="<<x<<endl;
}
};
class DC1:public BC{
public:

void add()
{

cout<<"add="<<(x+y)<<endl;
}
};
class DC2:public BC{
public:

void sub()
{
cout<<"sub="<<(y-x)<<endl;
}
};
int main()
{
DC1 obj1; 
DC2 obj2;
obj1.getxy();
obj1.add();

obj2.getxy();
obj2.sub();

return 0;
getch();
}*/
//Hybrid/multi path inheritance
#include<iostream>
#include<conio.h>
using namespace std;
class BC1{
public:
int x;
void getx()
{
x=10;
cout<<"x="<<x<<endl;
}
};
class BC2{
public:
int y;
void gety()
{
y=20;
cout<<"y="<<y<<endl;
}
};
class BC3{
public:
int z;
void getz()
{
z=30;
cout<<"z="<<z<<endl;
}
};
class DC:public BC1,public BC2,public BC3{
public:
int total;
void add()
{
total=x+y+z;
cout<<"add="<<total<<endl;
}
};
int main()
{
DC o;
o.getx();
o.gety();
o.getz();
o.add();
return 0;
getch();
}
