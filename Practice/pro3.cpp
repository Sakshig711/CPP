#include<iostream>
using namespace std;

int main()
{
	char ch[50];
	char *p=&ch[0];
	int i=0;
	int cnt=0;
	puts("Enter the string = ");
	gets(ch);
	
	while(*(p+i)!='\0')
	{
		if(*(p+i)==32)
		{
			cnt++;
		}
		i++;
	}
	printf("\nNo of words = %d",cnt+1);

 	return 0;
}

