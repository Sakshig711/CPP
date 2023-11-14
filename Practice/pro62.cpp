#include<iostream>
using namespace std;
class Power
{
	public:
		int p;
};

class Base
{
	public:
		int b;
};
int main()
{
	Power *p_ptr;
	Base *b_ptr;
	p_ptr=new Power();
	b_ptr=new Base();
	
	cout<<"Enter the power and base = ";
	cin>>p_ptr->p>>b_ptr->b;
	
	int i,ans=1;
	for(i=0; i<=p_ptr->p; i++)
	{
		ans=ans*b_ptr->b;
	}
	
	cout<<"Ans = "<<ans;


 	return 0;
}
/*Enter the power and base = 4
2
Ans = 32*/
