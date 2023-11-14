#include<iostream>
using namespace std;
class Parent
{
	private:
		int x;
		void show()
		{
			x=10;
			cout<<"\nIn show() x = "<<x;
		}
	protected:
		int y;
		void disp()
		{
			show();
			cout<<"\nIn disp()";
		}
	public:
		int z;
		void print()
		{
			cout<<"\nIn print()";
		}
};

class Child:public Parent
{
	public:
	void myfun()
	{
		disp();
		cout<<"\nIn myfun()";
	}
};
int main()
{
	Child obj;
	obj.myfun();
	


 	return 0;
}

