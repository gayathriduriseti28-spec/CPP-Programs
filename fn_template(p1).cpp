//Use of function template
#include<iostream>
using namespace std;
template <typename T>
T findMax(T a, T b) {
	return (a>b)?a:b;
}
int main()
{
	cout<<"Max of 20 and 20:"<<findMax(20,20)<<endl;
	cout<<"Max of 5.6 and 4.3:"<<findMax(5.6,4.3)<<endl;
	cout<<"Max of 'A' and 'Z':"<<findMax('A','Z')<<endl;
	return 0;
	
}
