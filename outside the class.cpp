//Outside the class
#include<iostream>
#include<cstring>
using namespace std;
class student 
{
	private:
		int rno;
		char *sname;
		public:
			void read(int,char *);
			void print(); 
			};
			void student::read(int a,char *s)
			{
				rno=a;
				sname=s;
			}
			void student::print() {
				cout<<"rno="<<rno<<endl;
				cout<<"name="<<sname<<endl;
			}
			int main()
			{
				student s;
				s.read(27,"Gayathri");
				s.print();
				return 0;
			}
