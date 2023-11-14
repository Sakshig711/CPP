/*

Create 2 objects of Number.Scan and print thir data using pointer to object.
You can add your own member function*/#include<iostream>
using namespace std;

class Number
{
	private:
		int x,y;
		
		public:
		void scan()
		{
			cout<<"Enter the x and y = ";
			cin>>x>>y;
		}
		void print()
		{
			cout<<x<<" "<<y<<endl;
		}
};
int main()
{
	Number T1,T2;
	Number *p,*q;
	p=&T1;
	q=&T2;
	p->scan();
	q->scan();
	
	p->print();
	q->print();
	


 	return 0;
}

