#include<iostream>
#include<string.h>
using namespace std;
class Student
{
	public:
	char *name;
	int age;
	
	Student()
	{
		cout<<"Enter the name = ";
		name = new char[20];
		cin.getline(name,20);
		
		cout<<"Enter the age = ";
		cin>>age;
		cin.ignore(1);
		
	}

};
int main()
{
	Student std[5];
	int i,res;
	char str[20];
	cout<<"Enter the string to compare";
	cin.getline(str,20);
	for(i=0; i<5; i++)
	{
		res=strcmp(std[i].name,str);
		if(res==0)
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

