#include<iostream>
using namespace std;

class Number
{
	public:
		int x,y;
		
		void scan()
		{
			cin>>x>>y;
		}
		
		void print()
		{
			cout<<"\n";
			cout<<x<<" "<<y<<endl;
		}
};

int main()
{
	Number obj[4];
	cout<<"Enter the x and y = ";
	obj[0].scan();
	obj[1].scan();
	obj[2].scan();
	obj[3].scan();
	
	obj[0].print();
	obj[1].print();
	obj[2].print();
	obj[3].print();

 	return 0;
}

