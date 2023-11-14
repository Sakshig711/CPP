#include<iostream>
using namespace std;

int main()
{
	int i,j,x,y;
	cout<<"Enter the range = ";
	cin>>x>>y;
	for (i=x; i<=y; i++)
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

