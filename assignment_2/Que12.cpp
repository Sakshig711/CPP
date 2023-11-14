/*Q12.Create memory at runtime for n integers.Scan n integers from user.Count how many times 10
is present in the array.*/
#include<iostream>
using namespace std;

int main()
{
	//int num[];
	int n;
	puts("Enter how many elements u want ? = ");
	cin>>n;
	int *p,i;
	int cnt=0;
	p= new int[n];
	puts("Enter the elements = ");
	for(i=0; i<n; i++)
	{
		cin>>*(p+i);
	}
	for(i=0; i<n; i++)
	{
		if(*(p+i)==10)
		{
			cnt++;
		}
	}
	cout<<"10 appears = "<<cnt;


 	return 0;
}

