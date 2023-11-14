/***********/
#include<iostream>
using namespace std;
class number 
{
	public:
		int x;
		void show()
		{
			cout<<"In show";
		}
//		protected:
//			int y;
		
	private:
		int z;
		void print()
		{
			cout<<"In print";
		}
};

int main()
{
	number T1,T2;
	T1.x=711;
	cout<<T1.x;

 	return 0;
}



