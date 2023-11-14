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
		int operator==(Distance temp)
		{
			if(km==temp.km && mtr==temp.mtr)
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
	Distance D1,D2;
	~D1;
	~D2;
	if(D1==D2)
	{
		cout<<"Equal";
	}
	else
	{
		cout<<"Not equal";
	}


 	return 0;
}

