/*Q12.
WAP to understand constant objects and constant member functions.*/
#include<iostream>
using namespace std;
class Number
{
	public:
		int x,y;
		void scan()
		{
			cout<<"Enter the x and y = ";
			cin>>x>>y;
		}
		void show()const
		{
		
			cout<<x<<" "<<y;
		}
};
int main()
{
	Number T1;
	T1.scan();
	T1.show();
	


 	return 0;
}

