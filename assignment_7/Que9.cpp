#include<iostream>
using namespace std;

class Student	
{
	public:
		char name[20];
		int age;
};

int main()
{
	Student T1,T2;
	cout<<"Enter the name and age = ";
	cin.getline(T1.name,20);
	cin>>T1.age;
	
	cout<<"Enter the name and age = ";
	cin.getline(T2.name,20);
	cin.getline(T2.name,20);
	cin>>T2.age;
	
	cout<<T1.name<<" "<<T1.age<<endl;
	cout<<T2.name<<" "<<T2.age;
	//scan and print data for T1 and T2 in main() only.
	return 0;
}


