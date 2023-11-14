#include<iostream>
using namespace std;

class Student
{
	private:
		int marks[4];
	public:
		
		void scan()
		{
			int i;
			for(i=0; i<4;i++)
			{
				cin>>marks[i];
			}
		}
		
		void average()
		{
			int i;
			int ans=0;
			for(i=0; i<4;i++)
			{
				ans=ans+marks[i];
			}
			float avg=ans/4.0;
			cout<<"The avarage is = "<<avg<<endl;
		}
};

int main()
{
	Student S1,S2,S3;
	
	cout<<"Enter the marks of 4 sub = ";
	S1.scan();
	cout<<"Enter the marks of 4 sub = ";
	S2.scan();
	cout<<"Enter the marks of 4 sub = ";
	S3.scan();
	
	S1.average();
	S2.average();
	S3.average();
	
		

 	return 0;
}

