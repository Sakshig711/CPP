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
	
	char ch;
	while(fin.eof()==0)
	{
		fin>>ch;
		cout<<"\n"<<ch;
	}

 	return 0;
}

