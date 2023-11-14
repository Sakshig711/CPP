/*Q14.
*/
#include<iostream>
using namespace std;
class Time
{
	private:
		int hrs,min;
		public:
			void operator~()
			{
				hrs=min/60+hrs;                                     
				min=min%60;
			}
			Time operator+(Time temp)
			{
				Time ans;
				ans.hrs=hrs+temp.hrs;
				ans.min=min+temp.min;
				return ans;
			}
			friend istream & operator>>(istream &din,Time temp);
			friend void operator<<(ostream &dout,Time temp);
};

istream & operator>>(istream &din,Time temp)
{
	cout<<"Enter hrs and min = ";
	cin>>temp.hrs>>temp.min;
	return cin;
}
void operator<<(ostream &dout,Time temp)
{
	cout<<temp.hrs<<temp.min;
	//return dout;
}
int main()
{
	Time T1,T2,T3;
	cin>>T1>>T2;
	~T1;
	~T2;
	//~ is overloaded here to convert given time in correct format.
	//if input is 3 hrs 90 mins
	//output will be 4 hrs 30 mins.
	T3 = T1 + T2;
	~T3;
	cout<<T3;
}


