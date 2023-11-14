#include<iostream>
using namespace std;
class Student
{
	public:
		char *name;
		Student()
		{
			cout<<"Enter the name = ";
			name = new char[30];
			cin.getline(name,30);
		}
		~Student()
		{
			cout<<name;
			delete []name;
		}
};
int main()
{
	Student *std;
	std = new Student();
	delete std;


 	return 0;
}

