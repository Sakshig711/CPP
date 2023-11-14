/*Q12.

Use inheritance and composition wisely.


*/
#include<iostream>
using namespace std;
class Date
{
	public:
		int day;
		int month;
		int year;
		void getdate()
		{
			cout<<"\nEnter the day = ";
			cin>>day;
			
			cout<<"Enter the month = ";
			cin>>month;
			
			cout<<"Enter the year = ";
			cin>>year;
		}
		void showdate()
		{
			cout<<"\n"<<day<<"/"<<month<<"/"<<year;
		}
};

class Person:public Date
{
	public:
		string name;
		int age;
		//birthdate
		void scanperson()
		{
			cout<<"\nEnter the name = ";
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

class Employee: public Person
{
	public:
		string name;
		int age;
		string companyname;
		
		void show()
		{
			cout<<"Enter company = ";
			getline(cin,companyname);
		}
		//joining date
};
int main()
{
	Employee obj;
	obj.show();
	obj.scanperson();
	obj.getdate();
	obj.showperson();
	obj.showdate();


 	return 0;
}

