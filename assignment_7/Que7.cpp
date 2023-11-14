#include<iostream>
using namespace std;

class Number	
{
	public:
		int x,y;
};
Number scan()	
{
	Number T1;
	cout<<"Enter the x and y = ";
	cin>>T1.x>>T1.y;
	return T1;
}
void print(Number D1)
{
	cout<<D1.x<<" "<<D1.y<<endl;
}
	
int main()
{
	Number T1,T2;
	T1 = scan();
	T2 = scan();
	print(T1);
	print(T2);	

 	return 0;
}

