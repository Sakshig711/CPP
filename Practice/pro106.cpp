#include<iostream>
using namespace std;

class Number
{
	public:
		int x,y;
		void scan()
		{
			cout<<"Enter the x and y = ";
			cin>>x>>y;
		}
		Number add(Number temp)
		{
			Number obj;
			obj.x=x+temp.x;
			obj.y=y+temp.y;	
			return obj;
			
		}
		
		void show()
		{
			cout<<x<<" "<<y;
		}
};
int main()
{
	Number T1,T2,T3,T4,T5;
	T1.scan();
	T2.scan();
	T3.scan();
	T4.scan();
	//T5=T1+T2+T3;
	T5=T1.add(T2);
	T5=T5.add(T3);
	T5=T5.add(T4);
	
	T5.show();
	

 	return 0;
}

