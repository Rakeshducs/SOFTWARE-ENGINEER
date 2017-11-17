#include<iostream>
using namespace std;
class CircularSingleList
{
	public:
		struct Node
		{
			int data;
			Node *next;
			
		}*first,*tmp,*last;
		CircularSingleList()
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
void CircularSingleList:: insertbeg()
{
	tmp=new Node;
	cout<<"Enter the integer value of data\n";
	cin>>tmp->data;
	if(first==NULL)
	{
		tmp->next=NULL;
		first=tmp;
		last=tmp;
	last->next=first;
	}
	else
	{
		tmp->next=first;
		first=tmp;
		last->next=first;
	}
}
void CircularSingleList:: insertend()
{
	tmp=new Node;
	cout<<"Enter the integer value of data\n";
	cin>>tmp->data;
	if(last==NULL)
	{
		tmp->next=NULL;
		first=tmp;
		last=tmp;
		last->next=first;
	}
	else
	{
		tmp->next=first;
		last->next=tmp;
		last=tmp;
	}
	
}
void CircularSingleList:: insertloc()
{
	cout<<"Enter the location where You want to enter the data\n";
	int pos;
	cin>>pos;
	if(first==NULL)
	{
		tmp=new Node;
		cout<<"Enter the integer value of the data\n";
		cin>>tmp->data;
		tmp->next=NULL;
		first=tmp;
		last=tmp;
		last->next=first;
	}
	else
	{
		int count=0;
		for(tmp=first;tmp!=last;tmp=tmp->next)
		count++;
		count++;
		if(pos>count)
		cout<<"SORRY! Your position is not present in Your List!\n";
		else
		{
			Node *tmp1=first;
			for(int i=1;i<pos-1;i++)
			tmp1=tmp1->next;
			tmp=new Node;
			cout<<"Enter the integer value of data\n";
			cin>>tmp->data;
			tmp->next=tmp1->next;
			tmp1->next=tmp;
			last->next=first;
		}
		
	}
}
void CircularSingleList::deletebeg()
{
	if(first==NULL)
	cout<<"SORRY! Your List is empty\n";
	else if(first==last&&last!=NULL)
	{
		tmp=first;
		cout<<"Deleted data is "<<tmp->data;
		delete tmp;
		first=NULL;
		last=NULL;
	}else
	{
		tmp=first;
		first=first->next;
		last->next=first;
		cout<<"Deleted data is "<<tmp->data;
		delete tmp;
	}
}
void CircularSingleList::deleteend()
{
	if(last==NULL)
	cout<<"SORRY! Your List is empty\n";
	else if(first==last&&last!=NULL)
	{
		tmp=first;
		cout<<"Deleted data is "<<tmp->data;
		delete tmp;
		first=NULL;
		last=NULL;
	}else
	{
		Node *tmp1=first;
		for(tmp=first;tmp!=last;tmp=tmp->next)
		tmp1=tmp1->next;
		Node *del=tmp1->next;
		tmp1->next=first;
		cout<<"Deleted data is "<<del->data;
		delete del;
	}
}
void CircularSingleList::deleteloc()
{
	if(first==NULL)
	cout<<"SORRY! Your List is empty\n";
	else 
	{
		cout<<"Enter the position which you want to delete\n";
		int pos;
		cin>>pos;
		int count=0;
		for(tmp=first;tmp!=last;tmp=tmp->next)
		count++;
		count++;
		if(pos>count)
		cout<<"SORRY! Your position  does not exist\n";
		else
		{
		Node *tmp1=first;
			for(int i=1;i<pos-1;i++)
			tmp1=tmp1->next;
			Node *del=tmp1->next;
			tmp1->next=tmp1->next->next;
			cout<<"Deleted data is "<<del->data;
			delete del;		
		}
	}
}
void CircularSingleList::display()
{
	cout<<"Elements of Your List is \n";
	for(tmp=first;tmp->next!=first;tmp=tmp->next)
	cout<<tmp->data<<endl;
//	cout<<last->data<<endl;
}
int main()
{
	char ch;
	CircularSingleList obj;
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
			default:cout<<"WRONG CHOICE! Please Retrey!\n";
		}
		cout<<"Enter Y to continue and N to exit\n";
		cin>>ch;
	}while(ch=='Y'||'y');
	return 0;
}
			
			
		
	

