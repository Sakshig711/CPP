#include<iostream>
using namespace std;

int main()
{
	int *p;
	p=new int[2];
	cout<<"Enter 2 ineger = ";
	cin>>*(p+0)>>*(p+1);
	cout<<"\n"<<*(p+0)<<" "<<*(p+1);


 	return 0;
}

