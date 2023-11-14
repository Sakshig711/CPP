#include<iostream>
using namespace std;
class Node
{
	public:
		int data;
		Node *next;
		
		Node()
		{
			data=0;
			next=NULL;
		}
		Node(int a)
		{	
			data=a;
			next=NULL;
		}	
};
class SLL
{
	private:
		Node *head;
	public:
		SLL()
		{
			head=NULL;
		}
		void create();
		void show();
		int count();
		int search(int srch);
		void addatbeg(int beg);
		void addatend(int end);
		void addatpos(int , int , int);
		void delatbeg();
		void delatend();
};
void SLL::create()
{
	Node *p=NULL;
	int n,x;
	cout<<"Enter how many Nodes u want = ";
	cin>>n;
	if(n==0)
	{
		return ;
	}
	
	cout<<"\nEnter the 1st node = ";
	cin>>x;
	
	head = new Node(x);
	p = head;
	
	for(int i=1; i<n; i++)
	{
		cout<<"\nEnter data for next Node = ";
		cin>>x;
		p->next=new Node(x);
		p=p->next;
	}
	
}
void SLL::show()
{
	Node *p=NULL;
	p=head;
	while(p!=NULL)
	{
		cout<<p->data<<endl;
		p=p->next;
	}
}
void SLL::addatbeg(int beg)
{
	Node *p=NULL;
	p=head;
	Node *q=NULL;
	q = new Node(beg);
	q->next=p;
	head=q;
}
void SLL::addatend(int end)
{
	Node *p;
	p=head;
	Node *q=NULL;
	q = new 
	while(p->next != NULL)
	{
		p=p->next;
	}
	
	
}
int main()
{
	SLL S1;
	S1.create();
	S1.show();
	
	int beg;
	cout<<"\nEnter data to add at begining = ";
	cin>>beg;
	S1.addatbeg(beg);
	S1.show();
	
	cout<<"Enter data to add at end = ";
	cin>>end;
	S1.addatend(end);


 	return 0;
}

