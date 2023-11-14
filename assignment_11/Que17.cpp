/*Q17.
*/
#include<iostream>
using namespace std;
class Number
{
	private:
		int x,y;
		public:
			Number operator*
			
};
istream & operator>>(istream &din,Time temp)
{
	cout<<"Enter hrs and min = ";
	cin>>temp.hrs>>temp.min;
	return cin;
}
int main()
{
	Number T1,T2,T3,T4;
	cin>>T1>>T2;
	T3 = T1 * T2;
	cout<<"\nMultiplication = "<<T3;
	T4 = T3 - T1;
	cout<<"\nT4 = "<<T4;
	T4 = -T1 + T2 * T3;
	cout<<"\nT4 = "<<T4;
	cout<<"\n-T1 = "<<-T1;
}


