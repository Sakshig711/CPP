/*Q3.WAP to understand working of abstract classes.Perform experiments.*/#include<iostream>
using namespace std;
class Parent
{
	public:
		virtual void show()=0;
		
//		void print
//		{
//			//cout<<"In print()";
//		}
		
};
class Child:public Parent
{
	public:
		void show()
		{
			cout<<"\nIn Child show()";
		}
};
int main()
{
	Child obj;
	obj.show();
	//obj.print();
	//child.show();

 	return 0;
}



