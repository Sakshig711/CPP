/*Q9.Keep scanning a character from user until usr enters '?'.Count only alphabets(capital or small) user has entered.
*/
#include<iostream>
using namespace std;

int main()
{
	char ch;
	int cnt=0;
	while(1<7)
	{
		cout<<"Enter the charecter = ";
		cin>>ch;
		if(ch!='?')
		{
			if((ch >='a'&& ch<='z') || (ch>='A' && ch<='Z'))
			{
				cnt++;	
			}	
		}
		else
		{
			break;
		}
		
	}
	cout<<"no of alphabets = "<<cnt;

 	return 0;
}

