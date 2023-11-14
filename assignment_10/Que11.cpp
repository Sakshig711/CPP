/*
Create a database of 4 students.Print them.
Scan a name from user.Search student having this name in database.*/
#include<iostream>
#include<string.h>
using namespace std;
class Student
{
	private:
		char name[30];
		int age;
		public:
		Student()
		{
			cout<<"Enter the name = ";
			cin.getline(name,30);
			cout<<"Enter the age = ";
			cin>>age;
			cin.ignore(1);
		}
		friend int main();
		
};
int main()
{
	Student arr[4];
	char str[15];
	int i,res;
	cout<<"Enter the name which u want to search = ";
	cin.getline(str,15);
	for(i=0; i<=4; i++)
	{
		if(strcmp(arr[i].name,str));
		{
			cout<<"Found";
			break;
		}
		
	}
	if(i==5)
	{
		cout<<"Not found";
		
	}
	
	


 	return 0;
}

