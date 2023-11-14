/*copy a string into another string in reverse order*/
#include<stdio.h>

int main()
{
	char source[50];
	char target[50];
	
	int i=0;
	puts("Enter the string = ");
	gets(source);
	while(source[i]!='\0')
	{
		i++;
	}
	i--;
	int j=0;
	while(i>=0)
	{
		target[j]=source[i];
		i--;
		j++;
	}
	target[j]='\0';
	printf("String in reverse order = %s ",target);
	
	
 	return 0;
}

