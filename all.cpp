/*#include <iostream>
using namespace std;

int fib(int n) {
    if (n == 0)  
        return 0;
    else if (n == 1)  
        return 1;
    else  
        return fib(n - 1) + fib(n - 2); // recursive call
}

int main() {
    int n;
    cout << "Enter number of terms: ";
    cin >> n;

    cout << "Fibonacci Series: ";
    for (int i = 0; i < n; i++) {
        cout << fib(i) << " ";
    }
    return 0;
}*/

//area of rectangle
/*#include<iostream>
using namespace std;
class rectangle
{
	int length;
	int width;
	public:
		rectangle(int l=5,int w=2)
		{
			length=l;
			width=w;
			cout<<"area is:"<<(length*width)<<endl;
			cout<<"perimeter is: "<<2*(length+width);
		}
};
int main()
{
	rectangle rec;
	return 0;
}*/


//area of square
/*#include<iostream>
using namespace std;
int main()
{
	int a;
	cout<<"enter the length of a side:";
	cin>>a;
	cout<<"area is:"<<a*a<<endl;
	cout<<"perimeter is:"<<4*a<<endl;
}*/

//area of circle
/*#include<iostream>
using namespace std;
int main()
{
	int a;
	cout<<"enter the radius of a circle:";
	cin>>a;
	cout<<"area is:"<<(3.14)*a*a<<endl;
	cout<<"perimeter is:"<<2*(3.14)*a<<endl;
}*/


//area of a rhombus
/*#include<iostream>
using namespace std;
int main()
{
	int d1,d2,a;
	cout<<"enter the diagnols &length of a side:";
	cin>>d1>>d2>>a;
	cout<<"area is:"<<(d1*d2)/2<<endl;
	cout<<"perimeter is:"<<4*a<<endl;
}*/

//area of parallelogram
/*#include<iostream>
using namespace std;
int main()
{
	int b,h;
	cout<<"enter the base and height:";
	cin>>b>>h;
	cout<<"area is:"<<b*h<<endl;
	cout<<"perimeter is:"<<2*(b*h)<<endl;
}*/

//factorial
/*#include<iostream>
using namespace std;
int fact(int n);
int main()
{
	int n,res;
	cout<<"enter a number:";
	cin>>n;
	res = fact(n);
	cout<<"factorial is:"<<res<<endl;
	
}
int fact(int n)
{
	if(n<=1)
	{
		return 1;
		
	}
	else
	{
		return n*fact(n-1);
	}
}*/

