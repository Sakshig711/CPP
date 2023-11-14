#include<iostream>
using namespace std;
inline void myfun();
int main()
{
	myfun();
	myfun();
	myfun();

 	return 0;
}
inline void myfun()
{
	cout<<"hello"<<endl;
}

