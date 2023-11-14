/*4.For the following main(),scan 2 integers and print ther addition.
Do not declare your own variables.
	int main()
	{
		int *p
	}*/
#include<iostream>
using namespace std;

int main()
{
	int *p;
	p = new int[2];
	
	cout<<"Enter the 2 integers = ";
	cin>>*(p+0)>>*(p+1);
	
	cout<<"\n"<<*(p+0)<<" "<<*(p+1);

 	return 0;
}

