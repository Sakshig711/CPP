/*
Q6.

//Scan data for array of 4 student objects and print them.*/
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
	Student obj[4];
	int i; 
	for(i=0; i<4; i++)
	{
		obj[i].scan();
	}
	for(i=0; i<4; i++)
	{
		obj[i].print();
	}

 	return 0;
}

