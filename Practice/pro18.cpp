#include<iostream>
using namespace std;

int main()
{
	char source[50];
	char target[50];
	int i=0;
	puts("Enter the source string = ");
	cin.getline(&source[0],50);
	
	while(source[i]!='\0')
	{
		target[i]=source[i];
		i++;
	}
	target[i]='\0';
	cout<<"The copied string is = "<<&target[0]; 
	

 	return 0;
}

