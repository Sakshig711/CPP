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
		
		void sort()
		{
			int i,j,temp;
			for(i=0; i<5; i++)
			{
				for(j=i+1; j<5; j++)
				{
					if(num[i]>num[j])
					{
						temp=num[i];
						num[i]=num[j];
						num[j]=temp;
					}
				}
			}
		}
		
		void print()
		{
			int i;
			for(i=0; i<5; i++)
			{
				cout<<num[i]<<" ";
			}
			cout<<"\n";
			
		}
};
int main()
{
	Array obj[4];
	int i;
	for(i=0; i<4; i++)
	{
		cout<<"Enter the array of 5 integers = ";
		obj[i].scan();
	}
	for(i=0; i<4; i++)
	{
		obj[i].sort();
	}
	for(i=0; i<4; i++)
	{
		obj[i].print();
	}


 	return 0;
}

