#include<iostream>
using namespace std;

class Number 
{
	public:
		int x;
		int y;
};

int main()
{
	Number obj;
	cout<<"Enter the x and y = ";
	cin>>obj.x>>obj.y;
	
	cout<<"\nobj.x = "<<obj.x<<"\nobj.y = "<<obj.y;


 	return 0;
}

