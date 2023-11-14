#include<iostream>
using namespace std;

class Number
{
	private:
		int x,y;
		public:
			
		static void scan(Number &obj);
		static void print(Number obj);
};
void Number::scan(Number &obj)
{
	cout<<"Enter the x and y = ";
	cin>>obj.x>>obj.y;
}
void Number::print(Number obj)
{
	cout<<obj.x<<" "<<obj.y<<endl;
}


int main()
{
	Number T1,T2;
	Number::scan(T1);
	Number::scan(T2);

	Number::print(T1);
	Number::print(T2);
	return 0;
}

