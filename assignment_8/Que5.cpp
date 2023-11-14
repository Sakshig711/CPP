/*Q5.

//Scan data for 3 students and print them.*/
#include<iostream>
using namespace std;

class Student
{
	private:
		char name[30];
		int age;
	public:
		void scan()
		{
			cout<<"Enter the age = ";
			cin>>age;
			
			cout<<"Enter the name = ";
			cin.getline(name,30);
			cin.getline(name,30);
			
			
		}
		void print()
		{
			cout<<"The name is = "<<name<<endl;
			cout<<"The age is = "<<age<<endl;
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

