#include<iostream>
using namespace std;

class Student
{
	private:
		int height;
	public:
		void getdata();
		void showdata();
		
};
void Student::getdata()
{
	cout<<"Enter the height = ";
	cin>>height;
}
void Student::showdata()
{
	cout<<height;
}

int main()
{
	Student S1;
	S1.getdata();
	S1.showdata();
	
 	return 0;
}

