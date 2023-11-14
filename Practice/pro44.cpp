#include<iostream>
using namespace std;

class Array
{
	public:
		int num[5];
		void scan()
		{
			int i;
			for(i=0; i<5; i++)
			{
				cin>>num[i];
			}
		}
		
		int search(int a)
		{
			int i;
			for(i=0; i<5; i++)
			{
				if(num[i]==a)
				{
					return 1;
				}
			}
			return 0;
		}
		
};
int main()
{
	Array A1,A2,A3;
	cout<<"Enter the 1st array = ";
	A1.scan();
	cout<<"Enter the 2nd array = ";
	A2.scan();
	cout<<"Enter the 3rd array = ";
	A3.scan();
	
	int x;
	cout<<"Enter the value u want to search in array = ";
	cin>>x;
	
	if(A1.search(x)==1)
	{
		cout<<"Found in 1st array";
	}
	else if(A2.search(x)==1)
	{
		cout<<"Found in 2nd array";
	}
	else if(A3.search(x)==1)
	{
		cout<<"Found in 3rd array";
	}
	else
	{
		cout<<"Not found";
	}

 	return 0;
}

