#include<iostream>
using namespace std;
class Distance
{
	public:
		int km,mtr;
		void operator~()
		{
			cout<<"Enter the km and mtr = ";
			cin>>km>>mtr;
		}
		int operator<(Distance temp)
		{
			int T1,T2;
			T1=km*1000+mtr;
			T2=temp.km*1000+temp.mtr;
			if(T1<T2)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		int operator>(Distance T1,Distance T2)
		{
			int t1,t2;
			t1=T1.km*1000+T1.mtr;
			t2=T2.km*1000+T2.mtr;
			if(T1>T2)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
};
int main()
{
	Distance D1 D2;
	~D1;
	~D2;
	if(D1>D2)
	{
		cout<<"D1>D2";
	}
	else
	{
		cout<<"D1<D2";
	}


 	return 0;
}

