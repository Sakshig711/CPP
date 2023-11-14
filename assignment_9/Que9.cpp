/*
Q9.WAP to understand working of copy constructor.*/
#include<iostream>
using namespace std;
class Number
{
	public:
		Number()
		{
			cout<<"\nin default";
		}
		Number(int a)
		{
			cout<<"In paramtrz"<<endl;
		}
		Number(Number &temp)
		{
			cout<<"in copy"<<endl;
		}

};
int main()
{
	Number obj;
	Number var(8);
	Number arr(obj);


 	return 0;
}

