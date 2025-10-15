//passing multiple parameters
#include<iostream>
using namespace std;
template<class T1,class T2>
class Test
{
	T1 a;
	T2 b;
	public:
		Test(T1 x,T2 y)
		{
			a=x;
			b=y;
		}
		void show()
		{
			cout<<a<<b;
		}
	
};
int main()
{
	Test<float,int>test1(1.68,168);
	Test<int,char>test2(150,'w');
	test1.show();
	test2.show();
}

