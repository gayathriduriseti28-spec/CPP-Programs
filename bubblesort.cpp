//BUBBLE SORT USING FUNCTION TEMPLATE
#include<iostream>
using namespace std;
template<class T>
void bubbleSort(T arr[],int n)
{
	for(int i=0;i<n-1;i++)
	{
		for (int j=0;j<n-i-1;j++)
		{
			if(arr[j]>arr[j+1])
{
	T temp=arr[j];
	arr[j]=arr[j+1];
	arr[j+1]=temp;
}
}
}
}
template <class T>
void display(T arr[],int n)
{
	for(int i=0;i<n;i++)
	cout<<arr[i]<<"";
	cout<<endl;
}
int main()
{
	int intArr[]={10,20,30,40,50};
	int n1=sizeof(intArr)/sizeof(intArr[0]);
	float floatArr[]={1.2,2.6,8.2,6.1};
	int n2=sizeof(floatArr)/sizeof(floatArr[0]);
	cout<<"Original Integer Array:";
	display(intArr,n1);
	bubbleSort(intArr,n1);
	cout<<"Sorted Integer array:";
	display(intArr,n1);
	cout<<"\nOriginal Float Array:";
	display(floatArr,n2);
	bubbleSort(floatArr,n2);
	cout<<"Sorted Float Array:";
	display(floatArr,n2);
	return 0;
}
			
		
