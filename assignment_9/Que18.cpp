/*Q18.

Create an array of 8 objects.Sort this array in ascending order by distance in each object.
Do not add any member function.Write whole code in main() only.*/
#include<iostream>
using namespace std;
class Distance
{
	public:
		int km,mtr;
};
int main()
{
	Distance arr[8];
	int i;
	for(i=0; i<8; i++)
	{
		cout<<"Enter the km and mtr = ";
		cin>>arr[i].km>>arr[i].mtr;
	}
	int j,temp;
	for(i=0; i<8; i++)
	{
		for(j=0; j<8; j++)
		{
			if(arr[i].km<arr[j].km)
			{
				temp =arr[i].km;
				arr[i].km=arr[j].km;
				arr[j].km=temp;
			}
		}
	}
	for(i=0; i<8; i++)
	{
		cout<<arr[i].km;
		cout<<" "<<arr[i].mtr<<endl;
	}
	


 	return 0;
}

