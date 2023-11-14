/*12.

Create a database of 4 students.Print them.
Do not add any member function.Write whole code in main() only.
Scan a name from user.Search student having this name in database.
Use destructor also.*/
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
			name = new char[20];
			cout<<"Enter the name = ";
			cin.getline(name,30);
			cout<<"Enter the age = ";
			cin>>age;
			cin.ignore(1);
		}
	
};

int main()
{
	int i;
	Student std[4];
	
	
	char str[20];
			cout<<"Enter the name which u want to search = ";
			cin.getline(str,20);
			for(i=0; i<=4; i++)
			{
				if(strcmp(std[i].name,str));
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

