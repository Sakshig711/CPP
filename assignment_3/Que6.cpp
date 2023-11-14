/*6.Keep scanning a number from user.Print addition of positive and negative numbers seperately.
*/
#include<iostream>
using namespace std;

int main()
{
	int num;
	int p=0,n=0;
	while(1<3)
	{
		cout<<"Enter the number = ";
		cin>>num;
		if(num==0)
		{
			break;
		}
		else if(num>0)
		{
			p++;
		}
		else
		{
			n++;
		}
	}
	cout<<"No positive elements = "<<p<<endl<<"No of negative elements = "<<n;

 	return 0;
}

