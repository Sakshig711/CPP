/*Q13.

Do not add any other member function in class Digit.*/
#include<iostream>
using namespace std;
class Digit;

class Number
{
	private:
		int x;
		friend class Digit;
};
class Digit
{
	private:
		void show()
		{
			Number obj;
			cout<<"Enter the x = ";
			cin>>obj.x;
			cout<<obj.x;
		}
		friend int main();
};
int main()
{
	Digit var;
	var.show();
	

 	return 0;
}

