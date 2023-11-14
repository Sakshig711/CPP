/*6)class Student has 2 private members.name and age.*/
#include<iostream>
using namespace std;
class Student
{
	
	private:
		char name[30];
		int age;
		public:
		friend int main();
	//	friend void show::Student(Student obj);
		
		//static void show(Student obj);
		static void show(Student obj)
		{
			cout<<obj.name<<" "<<obj.age;
		}
		
};
 	/*void Student::show(Student obj)
	{
		cout<<obj.name<<" "<<obj.age;
	}*/

int main()
{
	Student S;
	cout<<"\nEnter name of student = ";
	cin.getline(S.name,20);
	cout<<"\nEnter age of student = ";	
	cin>>S.age;
	Student::show(S);
	return 0;
}
