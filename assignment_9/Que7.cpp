/*Q7.Read theory of static first.

Scan 2 distances from user.Convert them in proper distance.
You can add your own member functions but every member function must be static.
input  = 3 km 3210 mtr
output = 6 km  210 mtr*/
#include<iostream>
using namespace std;
class Distance
{
	public:
		int km,mtr;
		static void scan(Distance &temp);
		static void convert(Distance &temp);
		static void print(Distance &temp);

};
void Distance::scan(Distance &temp)
{
	cout<<"Enter the km and mtr = ";
	cin>>temp.km>>temp.mtr;
}
void Distance::convert(Distance &temp)
{
	temp.mtr=temp.mtr/1000;
	temp.km=temp.km+(temp.mtr);
	
}
void Distance::print(Distance &temp)
{
	cout<<"\n"<<temp.km<<" "<<temp.mtr;
}

int main()
{
	Distance D1,D2;
	Distance::scan(D1);
	Distance::scan(D2);
	Distance::convert(D1);
	Distance::convert(D2);
	
	Distance::print(D1);
	Distance::print(D2);
	
	

 	return 0;
}

