/*Q11.
Scan data for 3 employees and print it.
Think how can you relate Date and Employee clases.(is-a OR has-a).*/
#include<iostream>
using namespace std;
class Date
{
	public:
		int day;
		int month;
		int year;
		void getdate()
		{
			cout<<"\nEnter the day = ";
			cin>>day;
			
			cout<<"Enter the month = ";
			cin>>month;
			
			cout<<"Enter the year = ";
			cin>>year;
		}
		void showdate()
		{
			cout<<"\n"<<day<<"/"<<month<<"/"<<year;
		}
};

class Employee:public Date
{
	public:
		//name
		//birth date
		//joining date
		//company name
};

int main()
{
	Date obj[3];
	int i;
	for(i=0; i<3; i++)
	{
		obj[i].getdate();
		obj[i].showdate();
	}
	


 	return 0;
}

