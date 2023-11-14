#include<iostream>
#include<string.h>
int compare(char * str);
using namespace std;
class Number
{
	private:
		char name[30];
		int age;
	public:
		Number()
		{
			cout<<"Enter the name = ";
			cin.getline(name,30);
			cout<<"Enter the age = ";
			cin>>age;
			cin.ignore(1);
		}
		int compare(char * str)
		{
			int res;
			res=strcmp(str,name);
			if(res==0)
			{
				return 0;
			}
			else
			{
				return 1;
			}
		}
};
int main()
{
	Number arr[4];
	int i;
	char str[30];
	cout<<"Enter the string to compare = ";
	cin.getline(str,30);
	int ans;
	for(i=0; i<4; i++)
	{
		ans=arr[i].compare(&str[0]);
		if(ans==0)
		{
			cout<<"Found ";
			break;
		}
	}
	
	if(i==5)
	{
		cout<<"Not found";
	}
	


 	return 0;
}

