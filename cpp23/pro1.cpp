#include<iostream>
using namespace std;
class Vehicle
{
	public:
		char *name;
};
class Teacher:public Vehicle
{
	public:
		char *teacher_name;
		Vehicle veh;
};
int main()
{
	Teacher obj;
	cout<<"Enter bthe teacher name = ";
	obj.teacher_name = new char[30];
	cin.getline(obj.teacher_name,30);
	cout<<"Enter the name = ";
	obj.name = new char[30];
	cin.getline(obj.name,30);
	
	cout<<obj.teacher_name<<endl;
	cout<<obj.name;

 	return 0;
}

