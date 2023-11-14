/*Q15.
Create an array of 4 objects.Sort array f integer in each object in ascending order.
Print array of each object.*/
#include<iostream>
using namespace std;
class Digit
{
	public:
		int arr[5];
		void scan()
		{
			int i;
			for(i=0; i<5; i++)
			{
				cin>>arr[i];
			}
		}
		void sort()
		{
			int i,j;
			int temp;
			for(i=0; i<5; i++)
			{
				for(j=i+1; j<5; j++)
				{
					if(arr[i]>arr[j])
					{
						temp=arr[i];
						arr[i]=arr[j];
						arr[j]=temp;
					}
				}
			}	
		}
		void print()
		{
			int i;
			for(i=0; i<5; i++)
			{
				cout<<" "<<arr[i];
			}
		}
	
	

};

int main()
{
	Digit std[4];
	int i;
	for(i=0; i<4; i++)
	{
		std[i].scan();
	}
	for(i=0; i<4; i++)
	{
		std[i].sort();
	}


 	return 0;
}

