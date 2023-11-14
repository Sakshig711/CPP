/*Q16.
	class Distance
	{
		private:
			int km,mtr;
			void scandata();
			void printdata();
			void convert();
	}
Scan 2 distances from user.Convert them in total distance in convert() function.*/
#include<iostream>
using namespace std;

class Distance
{
	private:
		int km,mtr;
		void scandata()
		{
			cout<<"Enter the distance km amd mtr = ";
			cin>>km>>mtr;
		}
		void printdata()
		{
			cout<<mtr<<endl;
		}
		void convert()
		{
			mtr = 1000*km + mtr;
//			cout<<mtr;
		}
		
		public:
			void scan()
			{
				scandata();
			}
			void print()
			{
				printdata();
			}
			void con()
			{
				convert();
			}
};
	

int main()
{
	Distance D1,D2;
	D1.scan();
	D2.scan();
	
	D1.con();
	D2.con();
	
	D1.print();
	D2.print();


 	return 0;
}

