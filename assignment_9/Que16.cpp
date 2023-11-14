/*Q16.

Create a database of 6 Employees.Scan a name from user.Search if database contains Employee
having name given by user.If yes,print all info of Employee.Do not add any member function.*/
#include<iostream>
using namespace std;
class Employee
{
	public:
		int salary;
		char name[20];
		char hometown[15];
		friend int main();
};
void employee::scan()
{
	cout<<"Enter the salary = ";
	cin>>salary;
	
	cout<<"Enter the name = ";
	cin.getline(name,19);
				
	cout<<"Enter the hometown = ";
	cin.getline(hometown,19);
}

int main()
{
	Employee obj;
	Employee::
	
	cout<<name<<endl;
	cout<<age<<endl;
	cout<<hometown<<endl;


 	return 0;
}

