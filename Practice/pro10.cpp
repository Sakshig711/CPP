#include<iostream>
using namespace std;
void add(int a);
void add(int a, int b);
void add(float a,float b);
int main()
{
	add((float)3.4,(float)8.1);

 	return 0;
}
void add(int a)
{
	cout<<"In one"<<endl;
}
void add(int a, int b)
{
	cout<<"In two"<<endl;
}
void add(float a,float b)
{
	cout<<"In float"<<endl;
}

