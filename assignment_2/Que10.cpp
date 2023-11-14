/*Q10.Scan a number from user.Print addition of its digits.*/
#include<iostream>
using namespace std;

int main()
{
	int num,rem,sum=0;
	cout<<"Enter the number = ";
	cin>>num;
	while(num>0)
	{
		rem=num%10;
		num=num/10;
		sum=sum+rem;
	}
	cout<<"Addition = "<<sum;

 	return 0;
}

