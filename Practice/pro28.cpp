#include<iostream>
using namespace std;
class Digit;
class Number
{
	private:
	int n;
	friend void scandat(Number &num,Digit dig);
	friend void showdata(Number &num,Digit dig);
};

class Digit
{
	private:
	int d;
	friend void scandat(Number &num,Digit &dig);
	friend void showdata(Number &num,Digit &dig);
};


void Digit::scandata(Number &num,Digit &dig)
{
	cout<<"Enter the digit and number = ";
	cin>>dig.d;
	cin>>num.n;
}
void Digit::showdata(Number &num,Digit &dig)
{
	cout<<"Digit = "<<dig.d<<"Number = "<<num.n;
}

int main()
{
	Number num;
	Digit dig;
	scandata(num,dig);
	showdata(num,dig);

 	return 0;
}

