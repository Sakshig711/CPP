#include<iostream>
using namespace std;

int main()
{
	int num,i;
	cout<<"Enter the number = ";
	cin>>num;
	for(i=2; i<num; i++)
	{
		while(num%i==0)
		{
			cout<<" "<<i;
			break;
		}
		
	}

 	return 0;
}

