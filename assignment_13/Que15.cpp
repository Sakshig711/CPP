/*Q10.

Scan data for 2 employees and 2 Teachers.
Implement inheritance to solve this program.
You can make changes in class to implement inheritance.

*/
#include<iostream>
using namespace std;
class Person
{
	public:
		string name;
		int age;
		void scanperson()
		{
			cout<<"\nEnter the string = ";
			getline(cin,name);
			
			cout<<"Enter the age = ";
			cin>>age;
			cin.ignore(1);
		}
		void showperson()
		{
			cout<<"\n"<<name;
			cout<<" "<<age;
		}
};
class Employee:public Person
{
	public:
		string name;
		int age;
		string companyname;
};
class Teacher:public Person
{
	public:
		string name;
		int age;
		string schoolname;
};

int main()
{
	Employee E1,E2;
	Teacher T1,T2;
	E1.scanperson();
	E2.scanperson();
	
	cout<<"Enter a data foe teachers : ";
	T1.scanperson();
	T2.scanperson();
	
	E1.showperson();
	E2.showperson();
	T1.showperson();
	T2.showperson();


 	return 0;
}

