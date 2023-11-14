/*2)class Student has 2 private members.name and age.*/
#include<iostream>
using namespace std;
class Student
{
	private:
		char name[30];
		int age;
		void scandata()
		{
			cout<<"Enter the age = ";
			cin>>age;
			
			cout<<"Enter the name = ";
			cin.getline(name,30);
			cin.getline(name,30);
			
			
		}
		void printdata()
		{
			cout<<"The name is = "<<name<<endl;
			cout<<"The age is = "<<age<<endl;
		}
		public:
			void print()
			{
				printdata();
			}
			
			void scan()
			{
				scandata();
			}
};

	int main()
	{
		Student S1,S2;
		S1.scan();
		S2.scan();
		S1.print();
		S2.print();
		return 0;
	}

