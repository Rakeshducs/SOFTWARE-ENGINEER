#include<iostream>
using namespace std;
class DoubleLinkedList
{
	public:
		struct Node
		{
			int data;
			Node *next;
			Node *prev;
		}*temp,*first,*last;
		DoubleLinkedList()
		{
			temp=NULL;
			first=NULL;
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

void DoubleLinkedList::insertbeg()
{
	temp=new Node;
	cout<<"Enter the integer value \n";
	cin>>temp->data;
/*	if(root=NULL)
	{
		temp->right=NULL;
		temp->left=NULL;
		root=temp;
	}
	else
	{
		Node *p1=root,*p;
		while(p1!=NULL)
		{
			if(temp->data<p1->data)
		{
				p=p1;
			p1=p1->left;
		}
		else
		{
			p=p1;
			p1=p1->right;
		}
		}
		if(temp->data<p->data)
		p->left=temp;
		else
		p->right=temp;
	}
}
void DoubleLinkedList::preorder(Node *temp)
{
	cout<<temp->data<<endl;
	preorder(temp->left);
	preorder(temp->right);
*/
	
	if(first==NULL)
	{
		temp->next=NULL;
		temp->prev=NULL;
		first=temp;
		last=temp;
		
	}
	else
	{
		temp->next=first;
		temp->prev=NULL;
		first=temp;
			
	}
}
void DoubleLinkedList::insertend()
{
	temp=new Node;
	cout<<"Enter the integer value \n";
	cin>>temp->data;
	if(last==NULL)
	{
		temp->next=NULL;
		temp->prev=NULL;
		first=temp;
		last=temp;
	}
	else
	{
		temp->next=NULL;
		last->next=temp;
		temp->prev=last;
		last=temp;
	}
}
void DoubleLinkedList::insertloc()
{
	cout<<"Enter the position where You want to insert data\n";
	int pos;
	cin>>pos;
	if(first==NULL)
	{
		temp=new Node;
		cout<<"Enter the integer value\n";
		cin>>temp->data;
		temp->next=NULL;
		temp->prev=NULL;
		first=temp;
		last=temp;
	}
	else
	{
		int count=0;
		for(temp=first;temp!=NULL;temp=temp->next)
		count++;
		count++;
		if(pos>count)
		cout<<"SORRY! Your position does not exist\n";
		else
		{
			Node *temp1=first;
			for(int i=1;i<pos-1;i++)
			temp1=temp1->next;
			temp=new Node;
			cout<<"Enter the integer value\n";
			cin>>temp->data;
			temp->next=temp1->next;
			temp1->next=temp;
			temp->prev=temp1;
			temp1->next->next->prev=temp;
			
		}
	}
}
void DoubleLinkedList::deletebeg()
{
	if(first==NULL)
	cout<<"SORRY! Your List is empty\n";
	else
	{
		temp=first;
		first=first->next;
		first->prev=NULL;
		cout<<"Deleted data is "<<temp->data<<endl;
		delete temp;
	}
}
void DoubleLinkedList::deleteend()
{
	if(last==NULL)
	cout<<"SORRY! Your List is EMPTY\n";
	else
	{
		Node *temp1=first;
		for(temp=first;temp->next->next!=NULL;temp=temp->next)
		temp1=temp1->next;
		Node *del=temp1->next;
		cout<<"Deleted Data is "<<del->data<<endl;
		last=temp1;
		delete del;
		last->next=NULL;
		
	}
}
void DoubleLinkedList::deleteloc()
{
	if(first==NULL)
	cout<<"SORRY! Your List is EMPTY\n";
	else
	{
		cout<<"Enter location where You want to Delete data\n";
		int pos;
		cin>>pos;
		int count=0;
		for(temp=first;temp!=NULL;temp=temp->next)
		count++;
		if(pos>count)
		cout<<"SORRY! Your position does not exist\n";
		else if(pos==1)
		{
			temp=first;
			first=first->next;
			cout<<"Deleted data is "<<temp->data<<endl;
			delete temp;
			
		}else
		{
			Node *temp1=first;
			for(int i=1;i<pos-1;i++)
			temp1=temp1->next;
			Node *del=temp1->next;
			temp1->next=temp1->next->next;
			temp1->next->next->prev=temp1;
			cout<<"Deleted Data is "<<del->data<<endl;
			delete del;
		}
			
	}
}
void DoubleLinkedList::display()
{
	if(first==NULL)
	cout<<"SORRY! Your List IS EMPTY\n";
	else{
	cout<<"Your's List elements are as follows\n";
	for(temp=first;temp!=NULL;temp=temp->next)
	cout<<temp->data<<endl;
}
}
int main()
{
	int exit=0;
	DoubleLinkedList obj;
	do{
		cout<<"Enter 1 for Insertbeg() function\n";
		cout<<"Enter 2 for Insertend() function\n";
		cout<<"Enter 3 for Insertloc() function\n";
		cout<<"Enter 4 for Deletebeg() function\n";
		cout<<"Enter 5 for Deleteend() function\n";
		cout<<"Enter 6 for Deleteloc() function\n";
		cout<<"Enter 7 for Display() function\n";
		int choice;
		cin>>choice;
		switch(choice)
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
		cout<<"Enter 0 for exit and non-zero for continue\n";
		cin>>exit;
		
		}while(exit!=0);
		return 0;
	}

