#include<iostream>
using namespace std;

class Array
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
		
		void replace()
		{
			int i;
			for(i=0; i<5; i++)
			{
				if(num[i]==10)
				{
					num[i]=100;
				}
			}
		}
		void print()
		{
			int i;
			for(i=0; i<5; i++)
			{
				cout<<num[i]<<" ";
			}
			cout<<"\n";
		}

		
};
int main()
{
	Array A1,A2,A3;
	cout<<"Enter the 1st array = ";
	A1.scan();
	cout<<"Enter the 2nd array = ";
	A2.scan();
	cout<<"Enter the 3rd array = ";
	A3.scan();
	
	A1.replace();
	A2.replace();
	A3.replace();
	
	A1.print();
	A2.print();
	A3.print();

 	return 0;
}

