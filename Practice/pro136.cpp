#include<iostream>
using namespace std;
class Employee
{
	public:
		char *name;
		int *salary;
		Employee()
		{
			cout<<"Enter the name = ";
			name = new char[30];
			cin.getline(name,30);
			
			cout<<"Enter the salary = ";
			salary = new int[1];
			cin>>*salary;
		}
		~Employee()
		{
			cout<<name;
			cout<<"\n"<<*salary;
			delete []name;
			delete salary;
		}
};
int main()
{
	Employee *emp;
	
	emp = new Employee();
	delete emp;


 	return 0;
}

