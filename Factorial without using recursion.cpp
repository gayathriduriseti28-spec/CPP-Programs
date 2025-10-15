//Factorial without using recursion.
#include<iostream>
using namespace std;
int main()
{
	int num,i;
	cout<<"Enter a number:";
	cin>>num;
	if(num<0)
	{
		cout<<"Factorial is not defined for negative numbers."<<endl;
		return 0;
	}
	long long factorial=1;
	for(i=1;i<=num;++i)
	{
		factorial*=i;
	}
	cout<<"Factorial of "<<num<< " is:" <<factorial<<endl;
	return 0;
}
