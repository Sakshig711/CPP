/*
2.WAP to understand how copy constructor gets executed when we 
perform parameter passing by reference.*/
#include<iostream>
using namespace std;

class Number
{
	public:
		Number()
		{
			cout<<"In default";
		}
		Number(Number &temp)
		{
			cout<<"\nIn copy";
		}
};
int main()
{
	Number obj;
	Number var(obj);
	


 	return 0;
}

