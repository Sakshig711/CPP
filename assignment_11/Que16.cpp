/*/*
Scan time for 3 objects from user.
Find the object with largest time.
This program is to be done 2 times.
-Without operator overloading 
-With operator overloading.
(Think about main() first)*/
#include<iostream>
using namespace std;
class Time
{
	private:
		int hrs,mins;
		public:
		Time()
		{
			cout<<"Enter the hrs and min = ";
			cin>>hrs>>mins;
		}
		void operator~()
		{
			mins=mins+(hrs*60);
		}
		int operator>(Time temp)
		{
			if(mins>temp.mins)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		friend void operator<<(ostream &dout,Time temp);
		
};
void operator<<(ostream &dout,Time temp)
{
	cout<<temp.mins;
	//return dout;
}
int main()
{
	Time obj[3];
	int i;
	for(i=0; i<3; i++)
	{
		~obj[i];
	}
	if(obj[0]>obj[1])
	{
		cout<<obj[0];
	}
	else if(obj[1]>obj[2])
	{
		cout<<obj[1];
	}
	else
	{
		cout<<obj[2];
	}


 	return 0;
}

