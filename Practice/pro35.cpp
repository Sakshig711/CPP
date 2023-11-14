#include<iostream>
using namespace std;
class Number
{
	public:
		int num[5];
	int myfun()
	{
		int i;
		cout<<"Enter the array of 5 integers = ";
		for(i=0; i<5; i++)
		{
			cin>>num[i];
		}
		int max;
		max=num[i];
		for(i=0; i<5; i++)
		{
			if(max<num[i])
			{
				max=num[i];
			}
		}
		return max;
	}
};
int main()
{
	Number T1,T2,T3;
	int a,b,c;
	a=T1.myfun();
	b=T2.myfun();
	c=T3.myfun();
	
	int ans;
	ans=a>b?a:b;
	ans=ans>c?ans:c;
	cout<<"The maximum integer in array is = "<<ans;
	


 	return 0;
}

