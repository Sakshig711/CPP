/*Q14.
;
Create a database of 6 employees.
-Print only those employees whose name starts with 'A'.
-Print only those employees who belong to pune.*/
#include<iostream>
using namespace std;
class Employee
{
	char name[30];
	char hometown[20];
	public:
		
		Employee()
		{
			cout<<"Enter the name of employee = ";
			cin.getline(name,30);
			
			cout<<"Enter the hometown = ";
			cin.getline(hometown,30);
			if(name[0]=='A')
			{
				myfun();
			}
			char arr[4]="pune";
			for(i=0; i<4; i++)
			{
				if(hometown[i]==arr[i])
				{
					myfun2();
				}
			}
			
		}
		void myfun()
		{
			cout<<"\n"<<name;
		}
		void myfun2()
		{
			cout<<"\n"<<hometown;
		}
		
		
};
int main()
{
	Employee obj[6];
	


 	return 0;
}

