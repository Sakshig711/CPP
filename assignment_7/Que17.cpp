#include<iostream>
using namespace std;

class Number	
	{
		public:
			int x,y;
			
			void add(Number S, Number P)
			{
				x=S.x+P.x;
				y=S.y+P.y;
			}
			void print()
			{
				cout<<x<<" "<<y;
			}
	};
	
	void scan(Number &S)
	{
		cout<<"Enter the x and y = ";
		cin>>S.x>>S.y;
	}
	
	Number scan()
	{
		Number S;
		cout<<"Enter the x and y = ";
		cin>>S.x>>S.y;
		return S;
	}
	int main()
	{
		Number T1,T2,T3;
		scan(T1);
		T2=scan();
		T3.add(T1,T2);
		T3.print();
	}
