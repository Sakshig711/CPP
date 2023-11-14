/*Q14.
	class Student
	{
		public:
			char name[30];
			int age;
			char hometown[20];
	}
Scan data of 2 Students from user.And print that data.*/
#include<iostream>
using namespace std;

class Student
{
	public:
		char name[30];
		int age;
		char hometown[20];
		void scandata()
		{
			cout<<"\n";
			cout<<"Enter the name = ";
			cin.getline(name,30);
			cout<<"Enter the age = ";
			cin>>age;
			cout<<"Enter the address = ";
			cin.getline(hometown,20);
			cin.getline(hometown,20);
		}
		void printdata()
		{
			cout<<"The name is = "<<name<<endl;
			cout<<"The age is = "<<age<<endl;
			cout<<"The address is = "<<hometown<<endl;
		}
};
int main()
{
	Student S1,S2;
	S1.scandata();
	S2.scandata();
	S1.printdata();
	S2.printdata();


 	return 0;
}

