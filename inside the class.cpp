//Inside the class
#include<iostream>
#include<cstring>
using namespace std;
class student 
{
	private:
		int rno;
		char *sname;
		public:
			void print() {
				cout<<"rno="<<rno<<endl;
				cout<<"name="<<sname<<endl;
			}
			void read(int a,char *s) {
				rno=a;
				sname=s;
			}
};
int main() {
	student s;
	s.read(27,"Gayathri");
	s.print();
	return 0;
}
