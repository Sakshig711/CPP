#include<iostream>
using namespace std;
class Digit
{
	private:
		int b;
		friend class Number;
};

class Number
{
	private:
		void show()
		{
			Digit temp;
			cin>>temp.b;
			cout<<temp.b;
		}
		friend int main();
};
int main()
{
	Number obj;
	obj.show();

 	return 0;
}

