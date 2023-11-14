/*Q6.Complete the code for following main() function.*/
#include<iostream>
using namespace std;



class Distance
{
	int inch,feet;
	public:
		void scan()
		{
			cout<<"Enter the inch and feet = ";
			cin>>inch>>feet;
		}
		void operator~()
		{
			feet=inch/12+feet;
			inch=inch%12;
		}
		Distance operator+(Distance temp)
		{
			Distance ans;
			ans.inch=inch+temp.inch;
			ans.feet=feet+temp.feet;
			return ans;
		}
		void show()
		{
			cout<<"\n"<<feet<<" "<<inch<<endl;
		}
		
};

int main()
{
	Distance D1,D2,D3;
	D1.scan();
	D2.scan();
	~D1;
	~D2;
	//~ operator is used here to convert distance in proper format
	//e.g. input = 3 feet 27 inch
	//output = 5 feet 3 inches
	D3 = D1 + D2;
	~D3;
	D3.show();
}

