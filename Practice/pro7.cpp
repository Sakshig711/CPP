#include<iostream>
using namespace std;

int main()
{
	cout<<"Hello"<<endl;
	int x=1;
	INDIA:
	if(x<=5)
	{
		cout<<x<<endl;
		x++;
		goto INDIA;
	}
	cout<<"Bye";

 	return 0;
}

