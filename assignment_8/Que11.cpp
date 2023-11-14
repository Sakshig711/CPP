/*Q11.

Scan 2 distances from user.Convert them in correct distance.
Access members of class using pointer to object only.*/
#include<iostream>
using namespace std;
class Distance
{
	int km,mtr;
	public:
		void scan()
		{
			cout<<"Enter the km and mtr = ";
			cin>>km>>mtr;
		}
		void convert()
		{
			mtr=1000*km+mtr;
		}
		void print()
		{
			cout<<mtr<<endl;
		}
};
int main()
{
	Distance D1,D2;
	Distance *p;
	p=&D1;
	p->scan();
	p->convert();
	p->print();
	p=&D2;
	p->scan();
	p->convert();
	p->print();


 	return 0;
}

