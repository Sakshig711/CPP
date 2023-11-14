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
	
	int cnt;
	string str;
	while(fin.eof()==0)
	{
		//fin.getline(str,30);
		getline(fin,str);
		cout<<"\n"<<str;
		int len;
		len = str.length();
		int i;
		for(i=0; i<len; i++)
		{
			if(str[i] == ' ')
			{
				cnt++;
			}
		}
		
		
	
		
		//cout<<"\n"<<str;
	}
	cout<<"\n"<<cnt+1;

 	return 0;
}

