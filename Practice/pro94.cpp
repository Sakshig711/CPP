#include<iostream>
using namespace std;
class Number
{
	public:
		int *p;
		void scan()
		{
			p=new int [2];
			cout<<"Enter 2 ineger = ";
			cin>>*(p+0)>>*(p+1);
			
		}
		void show()
		{
			cout<<"\n"<<*(p+0)<<" "<<*(p+1);
		}
};
int main()
{
	Number obj;
	obj.scan();
	obj.show();


 	return 0;
}

