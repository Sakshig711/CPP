#include<iostream>
using namespace std;


class Number
{
	private:
		int x,y;
		Number add(Number T1,Number T2)
		{
			Number temp;
			temp.x=T1.x+T2.x;
			temp.y=T1.y+T2.y;
			return temp;
		}
	public:
		void scan()
		{
			cout<<"Enter the x and y = ";
			cin>>x>>y;
		}
		static void print()
		{
			cout<<x<<" "<<y;
		}
		void call_add(Number T1,Number T2)
		{
			add();
		}
};


int main()
{
	Number obj1,obj2,obj3;
	obj1.scan();
	obj2.scan();
	
	
	obj3=call(obj1,obj2);
	
	obj3.print();



 	return 0;
}

