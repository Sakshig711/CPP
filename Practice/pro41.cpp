#include<iostream>
using namespace std;
class Student
{
	public:
		int age;
		int marks;
};
int main()
{
	Student S1,S2;
	cout<<"Enter the age and marks for student 1 = ";
	cin>>S1.age>>S1.marks;
	
	cout<<"Enter the age and marks for student 2 = ";
	cin>>S2.age>>S2.marks;
	
	Student temp;
	temp=S1;
	S1=S2;
	S2=temp;
	
	cout<<"After swaping = ";
	cout<<S1.age<<" "<<S1.marks<<endl;
	cout<<S2.age<<" "<<S2.marks;
 	return 0;
}

