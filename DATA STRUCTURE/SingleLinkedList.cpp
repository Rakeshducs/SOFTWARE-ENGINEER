#include<iostream>
using namespace std;
class SingleList
{
	public:
	struct Node
	{
		int data;
		Node *next;
	}*first, *tmp, *last;
	SingleList()
	{
		first=NULL;
		tmp=NULL;
		last=NULL;
	}
	
		void insertbeg();
		void insertend();
		void insertloc();
		void deletebeg();
		void deleteend();
		void deleteloc();
		void display();
};
void SingleList::insertbeg()
{
	tmp=new Node;
	cout<<"Enter the integer value\n";
	cin>>tmp->data;
	if(first==NULL)
	{
		tmp->next=NULL;
		first=tmp;
		last=tmp;
	}
	else
	{
		tmp->next=first;
		first=tmp;
		
	}
}
void SingleList::insertend()
{
	tmp=new Node;
	cout<<"Enter the integer value\n";
	cin>>tmp->data;
	if(last==NULL)
	{
		tmp->next=NULL;
		first=tmp;
		last=tmp;
	}
	else
	{
		tmp->next=NULL;
		last->next=tmp;
		last=tmp;
	}
}
void SingleList::insertloc()
{
	tmp=new Node;
	cout<<"Enter the position where You want to insert the value\n";
	int pos,count=0;
	cin>>pos;
	if(first==NULL)
	{
		cout<<"Enter the integer value\n";
		cin>>tmp->data;
		tmp->next=NULL;
		first=tmp;
		last=tmp;
		
	}
	else
	{
		Node *tmp1=first;
		for(tmp1=first;tmp1!=last;tmp1=tmp1->next)
		count++;
		count=count+2;
		if(pos>count)
		cout<<"SORRY! This position does not exist in your LIST\n";
		else
		{
			tmp1=first;
			for(int i=1;i<pos-1;i++)
			tmp1=tmp1->next;
			cout<<"Enter the integer value of data\n";
			cin>>tmp->data;
			tmp->next=tmp1->next;
			tmp1->next=tmp;
		}
	}
}
void SingleList::deletebeg()
{
	if(first==NULL)
	cout<<"SORRY! Your List is empty\n";
	else if(first==last&&first!=NULL)
	{
		tmp=first;
		first=NULL;
		last=NULL;
		cout<<"DELETED DATA is "<<tmp->data;
		delete tmp;
		
	}else
	{
		tmp=first;
		first=first->next;
		cout<<"DELETED DATA IS "<<tmp->data;
		delete tmp;
	}
}
void SingleList::deleteend()
{
	if(last==NULL)
	cout<<"SORRY! Your list is empty\n";
	else if(first==last&&first!=NULL)
	{
		tmp=first;
		first=NULL;
		last=NULL;
		cout<<"Deleted data is "<<tmp->data;
		delete tmp;
	}else
	{
		Node *tmp1=first;
		for(tmp=first;tmp->next->next!=NULL;tmp=tmp->next)
		tmp1=tmp1->next;
		Node *del=tmp1->next;
		cout<<"Deleted data is "<<del->data;
		tmp1->next=NULL;
		last=tmp1;
		
	}
}
void SingleList::deleteloc()
{
	if(first==NULL)
	cout<<"SORRY! Your List is empty\n";
	else
	{
		int count=0;
		for(tmp=first;tmp!=last;tmp=tmp->next)
		count++;
		count++;
		cout<<"Enter the position where You want to delete data\n";
		int pos;
		cin>>pos;
		if(pos>count)
		cout<<"SORRY! Your position is not present in Your List\n";
		else
		{
			tmp=first;
			for(int i=1;i<pos-1;i++)
			tmp=tmp->next;
			Node *del=tmp->next;
			cout<<"DELETED DATA IS "<<del->data;
			tmp->next=tmp->next->next;
			delete del;
		}
	}
}
void SingleList::display()
{
	cout<<"Your List's elements are as follows \n";
	for(tmp=first;tmp!=NULL;tmp=tmp->next)
	cout<<tmp->data<<endl;
}
int main()
{
	char ch;
	SingleList obj;
	do{
		cout<<"Enter 1 for insertbeg() function\n";
		cout<<"Enter 2 for insertend() function\n";
		cout<<"Enter 3 for insertloc() function\n";
		cout<<"Enter 4 for deletebeg() function\n";
		cout<<"Enter 5 for deleteend() function\n";
		cout<<"Enter 6 for deleteloc() function\n";
		cout<<"Enter 7 for display() function\n";
		int n;
		cin>>n;
		switch(n)
		{
			case 1:
				obj.insertbeg();
				break;
			case 2:
				obj.insertend();
				break;
			case 3:
				obj.insertloc();
				break;
			case 4:
				obj.deletebeg();
				break;
			case 5:
				obj.deleteend();
				break;
			case 6:
				obj.deleteloc();
				break;
			case 7:
				obj.display();
				break;
			default:cout<<"WRONG CHOICE!\n";
		}
		cout<<"Enter Y for continue or N for exit\n";
		cin>>ch;
	}while(ch=='Y'||'y');
}
