#include<iostream>
using namespace std;

class Employee
{
	private:
		string name;
		int salary;
		string hometown;
	public:
		friend int main();
//		int operator ==(Employee temp)
//		{
//			if(temp.hometown=="Mumbai")
//			{
//				return 1;
//			}
//			else
//			{
//				return 0;
//			}
//		}
};
		
//	friend istream& operator>>(istream& din,Employee &temp);
//	friend ostream& operator<<(ostream& dout,Employee temp);
//		
//};
//istream& operator>>(istream& din, Employee &temp)
//{
//	cout<<"Enter the name of Employee = ";
//	getline(cin,temp.name);
//	
//	cout<<"Enter the salary = ";
//	cin>>temp.salary;
//	
//	cout<<"Enter the hometown";
//	getline(cin,temp.hometown);
//	return din;
//}
//ostream& operator<<(ostream& dout,Employee temp)
//{
//	cout<<temp.name;
//	return dout;
//}
int main()
{
	Employee emp[6];
	int i;
	for(i=0; i<6; i++)
	{
		cout<<"\nEnter the city = ";
		getline(cin,emp[i].hometown);
		
		cout<<"963
		Enter the name = ";
		getline(cin,emp[i].name);
	}
	for(i=0; i<6; i++)
	{
		if(emp[i].hometown=="Mumbai")
		{
			cout<<"\n"<<emp[i].name;
		}
	}
	
	


 	return 0;
}

