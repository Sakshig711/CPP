/*Q13.Scan 3 integers from user.Print their addition in following main() function.
Do not declare your own variable.
	int main()
	{
		int *p;
	}*/
#include<iostream>
using namespace std;

int main()
{
	int *p;
	p = new int[3];
//	int res;
	int i;
	puts("Enter the elements = ");
	for(i=0; i<3; i++)
	{
		cin>>*(p+i);
	}
	int sum=0;
	for(i=0; i<3; i++)
	{
		sum=sum+*(p+i);
	}
//	res=addition(p);
	cout<<"The sum of given 3 integers is =  "<<sum;

 	return 0;
}


