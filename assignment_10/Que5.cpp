/*5.For following main(),scan 3 integers and find the maximum of them.
Do not declare your own variables.Use only given variables.
	int main()
	{
		int *p;
		int max;
	}
*/
#include<iostream>
using namespace std;

int main()
{
	int *p;
	int max;
	p = new int[3];
	
	cout<<"Enter the 3 integers = ";
	cin>>*(p+0)>>*(p+1)>>*(p+2);
	max=*(p+0)>*(p+1)?*(p+0):*(p+1);
	max=max>*(p+2)?max:*(p+2);
	
	cout<<"\n"<<"maximum is = "<<max;

 	return 0;
}

