#include<iostream>
using namespace std;
class Student
{
	public:
		int age,height;
		void scan()
		{
			cin>>age>>height;
		}
		void print()
		{
			cout<<age<<" "<<height;
		}
};
int main()
{
	Student Temp;
	const Student Std = Temp;
	Temp.scan();
	Temp.print();

 	return 0;
}

