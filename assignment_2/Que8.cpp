/*Q8.Keep scanning a number from user until he enters 0.Count number of positive and negative integers user has entered.
*/

#include<iostream>
using namespace std;

int main()
{
	int num,n=0,p=0;
	
	while(1<7)
	{
		cout<<"Enter the Number = ";
		cin>>num;
		if(num!=0)
		{
			//cin>>num;
			if(num<0)
			{
				n++;
			}
			else
			{
				p++;
			}	
		}
		else
		{
			break;
		}
		
	}
	cout<<"\npositive value = "<<p<<"\nnegative value = "<<n;

 	return 0;
}

