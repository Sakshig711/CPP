/*Q15.WAP to understand Inner classes.Define Inner class under public and access it.
Define Inner class under private and try to access it.Read notebook first.*/
#include<iostream>
using namespace std;

int main()
{
	class Number
	{
		public:
			int x;
			void scan()
			{
				cout<<"Enter the x = ";
				cin>>x;
				cout<<x;
			}
	};
	Number obj;
	obj.scan();


 	return 0;
}

