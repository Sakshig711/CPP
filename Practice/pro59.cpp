#include<iostream>
using namespace std;
class Student
{
	public:
		int age;
		int weight;
};
int main()
{
	Student obj[8];
	Student temp;
	int i,j;
	for(i=0; i<8; i++)
	{
		cout<<"Enter the age and weight = ";
		cin>>obj[i].age;
		cin>>obj[i].weight;
	}
	for(i=0; i<8; i++)
	{
		for(j=i+1; j<8; j++)
		{
			if(obj[i].age > obj[j].age)
			{
				temp=obj[i];
				obj[i]=obj[j];
				obj[j]=temp;
			}
		}
	}
	for(i=0; i<8; i++)
	{
		cout<<obj[i].age<<" ";
		cout<<obj[i].weight<<endl;
	}

 	return 0;
}

