#include<iostream>
using namespace std;
class Number
{
	private:
		int x,y;
		Number()
		{
			cout<<"\nIn default";
		}
		Number(int a,int b)
		{
			cout<<"\nIn paramtrz";
		}
		public:
			void print()
			{
				cout<<"\nIn print";
			}
			static void show()
			{
				cout<<"\nIn show";
				Number obj;
				Number var(7,11);
				obj.print();
			}
};
int main()
{
	Number::show();

 	return 0;
}

