#include<iostream>
using namespace std;

class Number	
{
	public:
		int x,y;
	friend int main();
	void print()
	{
		cout<<x<<" "<<y;
	}
	
	
};
void scan(Number &S)
	{
		cout<<"Enter x and y = ";
		cin>>S.x>>S.y;
	}
void print(Number S)
{
	cout<<"\n"<<S.x<<" "<<S.y;
}
	int main()
	{
		Number T1,T2;
		scan(T1);
		scan(T2);
		T1.print();
		print(T2);
		return 0;
	}
