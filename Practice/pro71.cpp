#include<iostream>
using namespace std;
class Student
{
	private:
		char name[20];
		int age;
	public:
		Student()
		{
			cout<<"Enter the name = ";
			cin.getline(name,19);
			
			cout<<"Enter the age = ";
			cin>>age;
			
			cin.ignore(1);
		}
		void show()
		{
			cout<<"The name is = "<<name<<endl;
			cout<<"The age is = "<<age;
		}
};
int main()
{
	Student obj;
	
	obj.show();
	


 	return 0;
}

