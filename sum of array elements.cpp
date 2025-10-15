//Sum of array elements
#include<iostream>
using namespace std;
int main()
{
	int n,i;
	cout<<"Enter the number of elements in the array:";
	cin>>n;
	int arr[n];
	int sum=0;
	cout<<"Enter "<<n<<"elements:"<<endl;
	for(i=0;i<n;++i)
	{
		cin>>arr[i];
		sum+=arr[i];
	}
	cout<<"Sum of array elements:"<<sum<<endl;
	return 0;
}
