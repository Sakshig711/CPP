/*Q7.
Create a database of 5 cities.Print the database.
If user enters same city again,give him message that
the city is already present.Ask him to enter new city name.
If he enters population less than 100,give him message wrong population.
Ask him to enter correct population.*/
#include<iostream>
using namespace std;

class City
{
	public:
		friend int main();
		string name;
		int population;
		City()
		{
			
				cout<<"Enter the string = ";
				getline(cin,name);
				
				cout<<"Enter the population = ";
				cin>>population;
				cin.ignore(1);	
				
		}
		void print()
		{
			cout<<name;
			cout<<" "<<population;
		}
		int operator==(City temp)
		{
			if(name==temp.name)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
};

int main()
{
	City str[6];
	int i,j;
	for(i=0; i<6; i++)
	{
		for(j=i+1; j<6; j++)
		{
			if(str[i]==str[j])
			{
				cout<<"String is repeted ";
			}
		}
		
		
	}
	


 	return 0;
}

