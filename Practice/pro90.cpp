#include<iostream>
using namespace std;
class Number
{
	int x;
	public:
		Number()
		{
			//x=a;
			cout<<"\nObject created "<<x;
		}
		~Number()
		{
			cout<<"\nobject destroy "<<x;
		}
};
int main()
{
	{
		Number num[3];
//		num[0]=0;
//		num[1]=1;
//		num[2]=2;
	}
	
	cout<<"Main ends";


 	return 0;
}

