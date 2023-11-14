#include<iostream>
using namespace std;

class Number 
{
	public:
		int x,y;
		void scandata()
		{
			cout<<"Enter the values = ";
			cin>>x>>y;
		}
		void show()
		{
			cout<<x<<y;	
			
		}		
};


int main()
{
	Number T1,T2;
	T1.scandata();
	T2.scandata();
	T1.show();
	T2.show();

 	return 0;
}

