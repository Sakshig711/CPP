#include<iostream>
using namespace std;
class Person;
class Student
{
	public:
		Student();
};
class Person
{
	int age;
	void show()
	{
		cout<<"\nage = "<<age;
	}
	friend Student::Student();
};
Student::Student()
{
	Person temp;
	temp.age=20;
	temp.show();
}
int main()
{
	Student obj;
	 

 	return 0;
}

