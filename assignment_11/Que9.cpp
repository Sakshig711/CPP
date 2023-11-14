/*Q9.
Complete the code using operator overloading for following main() function.*/
#include<iostream>
using namespace std;


class Distance
{
	public:
		int km;
		int mtr;
		Distance()
		{
			cout<<"Enter km and mtr = ";
			cin>>km>>mtr;
		}
		Distance operator~()
		{
			km=~km;
			mtr=~mtr;
		}
		int operator==(Distance temp)
		{
			if(km==temp.km)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		int operator>(Distance temp)
		{
			if(km>temp.km)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		int operator<(Distance temp)
		{
			if(km<temp.km)
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
	//Above 2 statements should scan data for D1 and D2.
	if(D1 == D2)
	{
		cout<<"Both distances are equal";
	}
	else if(D1>D2)
	{
		cout<<"D1 > D2";
	}
	else if(D1<D2)
	{
		cout<<"D1<D2";
	}
}

