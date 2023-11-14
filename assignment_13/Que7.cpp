/*Q2.
Scan n integers from user.Sort them in ascending order.*/
#include<iostream>
using namespace std;

int main()
{
	int n;
	cout<<"how many integers u want = ";
	cin>>n;
	
	int *p;
	p = new int[n];
	int i;
	cout<<"\nEnter the "<<n<< " inegers = ";
	for(i=0; i<n; i++)
	{
		cin>>*(p+i);
	}
	int j;
	int temp;
	for(i=0; i<n; i++)
	{
		for(j=i+1; j<n; j++)
		{
			if(*(p+i)<*(p+j))
			{
				temp=*(p+i);
				*(p+i)=*(p+j);
				*(p+j)=temp;
			}
		}
	}
	for(i=0; i<n; i++)
	{
		cout<<" "<<*(p+i);
	}
	
	


 	return 0;
}

