#include<iostream>
using namespace std;
class Student
{
	public:
		char *p;
		Student()
		{
			p = new char[20];
		}
		void show()
		{
			scan();
			cout<<p;
		}
		void scan()
		{
			
			cout<<"Enter the string = ";
			cin.getline(p,20);
			
		}
};
int main()
{
	Student std;
	std.show();

 	return 0;
}

