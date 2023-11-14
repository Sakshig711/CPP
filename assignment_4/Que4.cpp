/*Q15.
	class Number
	{
		public:
			int x,y;
			void scandata();
			void printdata();
	}

Scan and print details of 2 objects of class Number.Do not access x and y in non member functions.*/
#include<iostream>
using namespace std;

class Number
{
	private:
		int x,y;
		void scandata()
		{
			cout<<"Enter the x and y = ";
			cin>>x>>y;
		}
		void printdata()
		{
			cout<<x<<y;
		}
		
	public:
		void temp()
		{
			scandata();
		}
		void print()
		{
			printdata();
		}
};
/*Number scandata()
{
	Number obj;
	cout<<"Enter the x and y = ";
	cin>>obj.x>>obj.y;
	return obj;
	
}
Number printdata(Number obj)
{
	cout<<obj.x<<" "<<obj.y<<endl;
}*/
int main()
{
	Number T1,T2;
	T1.temp();
	//T2.scandata();
	
	T1.print();
	//printdata(T2);
	

 	return 0;
}

