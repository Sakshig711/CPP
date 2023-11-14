/*
Create 3 objects of Number in main().Scan their data.
Find the largest integer among all 15 integers.
Do not add any member function.*/
#include<iostream>
using namespace std;
class Number
{
	public:
		int num[5];
		
		void scan()
		{
			int i;
			for(i=0; i<5; i++)
			{
				cin>>num[i];
			}
		}
		int find()
		{
			int i;
			int max;
			max=num[0];
			for(i=0; i<5; i++)
			{
				if(num[i]>max)
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
	cout<<"Enter the array of 5 integers = ";
	T1.scan();
	cout<<"Enter the array of 5 integers = ";
	T2.scan();
	cout<<"Enter the array of 5 integers = ";
	T3.scan();
	
	int a,b,c;
	a=T1.find();
	b=T2.find();
	c=T3.find();
	int ans;
	
	ans=a>b?a:b;
	ans=c>ans?c:ans;
	cout<<ans;


 	return 0;
}

