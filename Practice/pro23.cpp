#include<iostream>
using namespace std;

class Distance
{
	public:
		int km,m;
		void scan()
		{
			cout<<"Enter the km = ";
			cin>>km;
			cout<<"Enter the m = ";
			cin>>m;
		}
		void convert()
		{
			m=(km*1000)+m;
		}
		void show()
		{
			cout<<"Distance in meter is = "<<m;
		}
};


int main()
{
	Distance D1;
	D1.scan();
	D1.convert();
	D1.show();

 	return 0;
}

