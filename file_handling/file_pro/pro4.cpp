#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	char path[]="D:\\cpp\\file_handling\\myfile\\file.txt";
	ifstream fin(path);
	
	if(fin.fail()==1)
	{
		cout<<"file is not connected";
	}
	else
	{
		cout<<"File is connected";
	}
	
	string str;
	while(fin.eof()==0)
	{
		getline(fin,str);
		cout<<"\n"<<str;
	}

 	return 0;
}

