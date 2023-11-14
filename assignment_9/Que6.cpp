/*
Q6.

Scan data for 3 students.
Print this data.Add your own member functions.*/
#include<iostream>
using namespace std;
class Student
{
	private:
		char name[30];
		int age;
		char hometown[20];
		public:
			void scan()
			{
				cout<<"Enter the name = ";
				cin.getline(name,29);
				
				cout<<"Enter the age = ";
				cin>>age;
				cin.ignore(1);
				
				cout<<"Enter the hometown = ";
				cin.getline(hometown,19);
			}
			
			void print()
			{
				cout<<name<<endl;
				cout<<age<<endl;
				cout<<hometown<<endl;
			}
};
int main()
{
	Student S1,S2,S3;
	S1.scan();
	S2.scan();
	S3.scan();
	
	S1.print();
	S2.print();
	S3.print();

 	return 0;
}

