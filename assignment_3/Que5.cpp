/*5.Scan array of 4 alphabets from user.Print ascii value of each alphabet in array.
([] notation)*/
#include<iostream>
using namespace std;

int main()
{
	char arr[4];
	int i;
	puts("Enter the 4 characters = ");
	for(i=0; i<4; i++)
	{
		cin>>arr[i];
	}
	
	for(i=0; i<4; i++)
	{
		int asciiValue = (int)arr[i];
		cout << "The ASCII value of character " << arr[i] << " is " << asciiValue << endl;
	}

 	return 0;
}

