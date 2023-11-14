/*Q7.Complete the code for following main() function.
*/
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
	void show()
	{
		cout<<"\n"<<km<<" "<<mtr;
	}
};



int main()
{
	Distance D1,D2,D3,D4;
	D1.scan();
	D2.scan();
	D3.scan();
	D4 = D1>D2?D1:D2;
	D4 = D4<D3?D3:D4;
	D4.show();
	return 0;
}

