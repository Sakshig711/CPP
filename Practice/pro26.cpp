#include<iostream>
using namespace std;
class Distance
{
	private:
		int km,m;
	public:
		void convert();
		void set(int a,int b)
		{
			km=a;
			m=b;
		}
		void print();
};
void Distance::convert()
{
	int res;
	res=m/1000;
	km=km+res;
	m=m%1000;
	
}
void Distance::print()
{
	cout<<" km = "<<km<<" m = "<<m;
}
int main()
{
	Distance D1,D2;
	int a,b;
	cout<<"Enter the distance km ans m = ";
	cin>>a>>b;
	D1.set(a,b);
	D1.convert();
	D1.print();
	
	cout<<"\nEnter the distance km ans m = ";
	cin>>a>>b;
	D2.set(a,b);
	D2.convert();
	D2.print();
	
	

 	return 0;
}

