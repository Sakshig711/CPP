#include<iostream>
using namespace std;

class Number
{
	public:
		int num[4];	
		int i;
		void show()
		{
			for(i=0; i<4; i++)
			{
				cout<<" "<<num[i];
			}
			
		}
};
int main()
{
	Number obj;
	int i=0;
	cout<<"Enter the array = ";
	for(i=0; i<4; i++)
	{
		cin>>obj.num[i];
	}
	
	obj.show();


 	return 0;
}

