#include<iostream>
using namespace std;

class Number
{
		int x;
		public:
		void show()
		{
			cout<<"in show";
		}	
		private:
			int z;
			void print()
			{
				cout<<"In print";
			}
};
int main()
{
	Number T1,T2;
	T1.show();
	T2.show();


 	return 0;
}

