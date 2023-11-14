/*10.

Create a database of 4 students.Print them.
Do not add any member function.Write whole code in main() only.
Scan a name from user.Search student having this name in database.*/
#include<iostream>
using namespace std;
class Student
{
	public:
		char name[30];
		int age;
};
int main()
{
	Student S1,S2,S3,S4;

	cout<<"Enter the name = ";
	cin.getline(S1.name,30);
	cout<<"Enter the age = ";
	cin>>S1.age;
	cin.ignore(1);
	
	cout<<"Enter the name = ";
	cin.getline(S2.name,30);
	cout<<"Enter the age = ";
	cin>>S2.age;
	cin.ignore(1);
	
	cout<<"Enter the name = ";
	cin.getline(S3.name,30);
	cout<<"Enter the age = ";
	cin>>S3.age;
	cin.ignore(1);
	
	cout<<"Enter the name = ";
	cin.getline(S4.name,30);
	cout<<"Enter the age = ";
	cin>>S4.age;
	
	cout<<"\n"<<S1.name;
	cout<<"\n"<<S1.age;
	
	cout<<"\n"<<S2.name;
	cout<<"\n"<<S2.age;
	
	cout<<"\n"<<S3.name;
	cout<<"\n"<<S3.age;
	
	cout<<"\n"<<S4.name;
	cout<<"\n"<<S4.age;
	
	
	


 	return 0;
}

