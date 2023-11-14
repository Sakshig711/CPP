#include<iostream>
using namespace std;
class Student
{
	public:
		int height;
		int weight;
		
};
int main()
{
	Student std[8];
	int i,j;
	Student temp;
	cout<<"Enter the Height and Weight = ";
	for(i=0; i<8; i++)
	{
		cin>>std[i].height;
		cin>>std[i].weight;
	}
	for(i=0; i<8; i++)
	{
		for(j=i+1; j<8; j++)
		{
			if(std[i].height>std[j].height)
			{
				temp=std[i];
				std[i]=std[j];
				std[j]=temp;
			}
		}
	}
	
	for(i=0; i<8; i++)
	{
		cout<<std[i].height<<" "<<std[i].weight<<endl;
	}

 	return 0;
}

