#include<iostream>
using namespace std;

class Number
{
	public :
		int num[5];
		
		void scan()
		{
			int i;
			for(i=0; i<5; i++)
			{
				cin>>num[i];
			}
		}
		
		int find_max()
		{
			int i;
			int max;
			max=num[0];
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
	cout<<"Enter the array of 5 integers = ";
	T1.scan();
	cout<<"Enter the array of 5 integers = ";
	T2.scan();
	cout<<"Enter the array of 5 integers = ";
	T3.scan();
	
	
	int max1,max2,max3;
	max1=T1.find_max();
	max2=T2.find_max();
	max3=T3.find_max();
	
	int ans;
	ans=max1>max2?max1:max2;
	ans=ans>max3?ans:max3;
	cout<<"The maximum integer in array is = "<<ans;
 	return 0;
}

