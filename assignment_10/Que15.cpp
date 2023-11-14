/*15.

Create an array of 4 objects at runtime.Scan data for those objects
and print the data*/
#include<iostream>
using namespace std;
class Number
{
	public:
		int x,y;
		Number()
		{
			cout<<"Enter x and y = ";
			cin>>x>>y;
		}
		void print()
		{
			cout<<x<<" "<<y;
		}
};
int main()
{
	Number obj[4];
	int i; 
	for(i=0; i<=4; i++)
	{
		obj[i].print();
	}

 	return 0;
}

