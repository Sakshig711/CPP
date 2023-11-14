#include<iostream>
using namespace std;

class Distance
{
	int km,m;
	private:
		
		void set(int a,int b)
		{
			km=a;
			m=b;
		}
		void print()
		{
			cout<<"m = "<<m;
		}
		void convert()
		{
			m=(km*1000)+m;
		}
};


int main()
{
	Distance D1;
	int x,y,res;
	cout<<"Enter the km amd m = ";
	cin>>x>>y;
	D1.set(x,y)
	D1.convert();
	D1.print(res);

 	return 0;
}
