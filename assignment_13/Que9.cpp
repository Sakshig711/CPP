/*Q4.
Using inbuilt string data type,scan 2 strings from user.Compare them to check if they
are equal or not.*/
#include<iostream>
using namespace std;

//class string
//{
//	public:
//		
//		
//};
int main()
{
	string S1,S2;
	cout<<"Enter the 1st string = ";
	getline(cin,S1);
	
	cout<<"Enter the 2nd string = ";
	getline(cin,S2);
	
	if(S1==S2)
	{
		cout<<"They are equal";
	}
	else
	{
		cout<<"They are not equal";
	}
	


 	return 0;
}

