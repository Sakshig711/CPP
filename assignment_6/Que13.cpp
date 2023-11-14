/*7)Number T has 2 private members.x and y.*/
#include<iostream>
using namespace std;

class Number
{
	private:
		int x,y;
		friend class Digit;

};

class Digit
{
	public:
		Number getdata();
		void print(Number T);

};

Number Digit::getdata()
{
	Number temp;
	cout<<"Enter the x and y = ";
	cin>>temp.x>>temp.y;
	return temp;
}

void Digit::print(Number T)
{
	cout<<T.x<<" "<<T.y;
}



int main()
{
Number T;
Digit D;
T = D.getdata();
D.print(T);
return 0;
}



