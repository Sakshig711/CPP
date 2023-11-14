/*Q12.

Create a database of 8 students.Print name and age of all
those students whose age is greater than 21.
This program is to be done 2 times.
-Without operator overloading 
-With operator overloading.
(Think about main() first)*/
#include<iostream>
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
	Student std[8];
	int i;
	for(i=0; i<8; i++)
	{
		if(std[i].age>21)
		{
			cout<<std[i].name<<endl;
		}
	}


 	return 0;
}

