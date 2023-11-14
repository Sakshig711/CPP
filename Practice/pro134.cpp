#include<iostream>
using namespace std;

int main()
{
	int n;
	cout<<"Enter the n = ";
	cin>>n;
	int *p;
	p = new int[n];
	
	int i;
	cout<<"Enter the array of "<<n<<" integers = ";
	for(i=0; i<n; i++)
	{
		cin>>*(p+i);
	}
	int num;
	cout<<"Enter the number u want to delete = ";
	cin>>num;
	
	for(i=0; i<n; i++)
	{
		if(*(p+i)==num)
		{
			break;
		}
	}
	if(i==n)
	{
		cout<<"Not found ";
		return 0;
	}
	else
	{
		int j;
		for(j=i; j<n-1; j++)
		{
			*(p+j)=*(p+j+1);
		}
		*(p+(n-1))=0;
	}
	for(i=0; i<n; i++)
	{
		cout<<" "<<*(p+i);
	}


 	return 0;
}

