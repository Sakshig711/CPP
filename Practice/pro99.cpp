#include<iostream>
using namespace std;
class Student
{
	public:
	char *name;
	int age;
	Student()
	{
		cout<<"Enter the name and age = ";
		name = new char[20];
		cin.getline(name,20);
		cout<<"Enter the age = ";
		cin>>age;
	}
	~Student()
	{
		cout<<name<<endl;
		cout<<age;
		delete[]name;
	}
};
int main()
{
	Student std;
	
 	return 0;
}

