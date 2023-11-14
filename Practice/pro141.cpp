#include<iostream>
using namespace std;

class Exponent
{
	public:
		int power;
		int base;
		void convert(int b,int p)
		{
			power=p;
			base=b;
			
			int res=1;
			for(int i=0; i<b; i++)
			{
				res=res*p;
			}
			cout<<"The ans is = "<<res;
		}
		
};
int main()
{
	Exponent obj;
	int p,b;
	
	cout<<"Enter thre base = ";
	cin>>b;
	cout<<"Enter the power = ";
	cin>>p;
	obj.convert(p,b);
	


 	return 0;
}

