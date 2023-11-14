#include<iostream>
using namespace std;
class Number 
{
	private:
		int x;
		Number()
		{
			cout<<"\nd = "<<d;
		}
		
		Number();
};
class Digit
{
	private:
		int d;
		void show(int a)
		{
			cout<<"In paramtz";
		}
		friend Number::Number();
};
Number::Number()
{
	Number temp;
	temp.d=10;
}
int main()
{
	Number obj(7);

 	return 0;
}

