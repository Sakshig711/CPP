/*13.

Create a database of 4 students.Print them.
Do not add any member function.Write whole code in main() only.
Scan age from user.Print only name of those students whose age
is same as age given by user.*/
#include<iostream>
using namespace std;
class Student
{
	public:
		char *name;
		int *age;
		
};
int main()
{
	Student std[4];
	int i;
	Student()
	{
			name = new char[20];
			age = new int ();
			cout<<"Enter the name = ";
			cin.getline(name,30);
			cout<<"Enter the age = ";
			cin>>*age;
			cin.ignore(1);
	}
	
	int a;
	cout<<"Enter the age which u want to search = ";
	cin>>a;
	
	for(i=0; i<=4; i++)
	{
		if(std[i].age == a)
		{
			cout<<std[i].name;
		}
	}


 	return 0;
}

