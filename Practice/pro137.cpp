/*solution for memory leak*/
#include<iostream>
using namespace std;
class Person
{
	public:
		char *name;
		Person()
		{
			cout<<"Enter the name of the person = ";
			name = new char[30];
			cin.getline(name,30);
		}
		virtual ~Person()
		{
			cout<<name;
			delete []name;
		}
};
int main()
{
	Person *obj;
	obj = new Person();
	delete obj;

 	return 0;
}

