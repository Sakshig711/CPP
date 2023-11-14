#include<iostream>
using namespace std;
class Student
{
	public:
		char *p;
		void show()
		{
			scan();
			cout<<p;
		}
		void scan()
		{
			
			cout<<"Enter the string = ";
			p = new char[20];
			cin.getline(p,20);
			//cout<<p;
		}
};
int main()
{
	Student std;
	std.show();

 	return 0;
}

