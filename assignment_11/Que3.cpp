/*Q3.Complete the code for following main() function.
*/
#include<iostream>
using namespace std;
class Number
{
	public:
	int x,y;
	Number()
		{
			cout<<"Enter x and y = ";
			cin>>x>>y;
		}
		Number(int a)
		{
			
		}
	Number operator*(Number temp)
	{
		Number ans(1);
		ans.x=x+temp.x;
		ans.y=y+temp.y;
		return ans;
	}
	Number operator^(int a)
	{
		Number ans(1);
		ans.x=x^a;
		ans.y=y^a;
		return ans;
	}
	void show()
	{
		cout<<"\n"<<x<<" "<<y;
	}
};
int main()
{
	Number T1,T2,T3(1);
	T3 = T1 * T2;
	T3.show();
	T3 = T3 ^ 2; //treat ^ as power operator.
	//It should perform x^2 and y^2; 
	T3.show();
}


