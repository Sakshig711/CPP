/*Q8.Keep scanning a number from user until he enters 0.Count number of positive and negative integers user has entered.
*/

#include<iostream>
using namespace std;

int main()
{
	int num;
	while(num!=0)
	{
		cin>>num;
		if(num<0)
		{
			n++;
		}
		else
		{
			p++;
		}
	}
	cout<<"\npositive value = "<<p<<"negative value = "<<n;

 	return 0;
}

