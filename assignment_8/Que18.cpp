/*Q20-1.WAP to find nth prime number.*/
#include<iostream>
using namespace std;

int main()
{
	int i,j,n;
	cout<<"Enter the n = ";
	cin>>n;
	
	for(i=0; i<=n; i++)
	{
		for(j=2; j<i; j++)
		{
			if(i%j==0)
			{
				break;
			}
		}
		if(i==j)
		{
			cout<<i<<endl;
		}
	}


 	return 0;
}

