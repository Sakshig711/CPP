/*Q4.WAP to make private memberfunction of one class a friend of another class.*/
#include<iostream>
using namespace std;

class Number
{
	private :
		void show()
		{
			cout<<"in show()";
		}
		friend class Digit;
		friend int main();
};

class Digit
{
	public:
		void myfun()
		{
			cout<<"In myfun() ";
			//show();
			
		}
		
};
int main()
{
	Number obj;
	Digit var;
	var.myfun();
	obj.show();


 	return 0;
}

