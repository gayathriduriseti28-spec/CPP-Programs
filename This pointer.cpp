//This pointer
#include<iostream>
using namespace std;
class Counter {
	private:
		int count;
	public:
		Counter(int count) {
			this->count=count;
		}
		void display()
		{
			cout<<"Count is:"<<this->count<<endl;
			}
};
int main()
{
	Counter c(10);
	c.display();
	
}


