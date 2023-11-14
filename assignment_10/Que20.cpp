/*local class*/
#include<iostream>
using namespace std;
void show();
class Number;
int main()
{
	class Number
	{
		public:
			int x;
			void show();
				
	};
	Number obj;
//	obj.show();
	
 	return 0;
}
void show()
{
	cout<<"In local";
}


