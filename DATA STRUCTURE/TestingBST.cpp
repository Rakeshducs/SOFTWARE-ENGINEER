#include<iostream>
using namespace std;
class TestingBST
{
	public:
		struct Node
		{
			int data;
			Node *next;
			Node *prev;
		}*temp,*first,*last;
		TestingBST()
		{
			temp=NULL;
			first=NULL;
			last=NULL;
		}
		void insert();
	//	void rec_preorder(Node *);
		void display();
};
void TestingBST::insert()
{
	temp=new Node;
	cout<<"Enter data\n";
	cin>>temp->data;
	if(first==NULL)
	{
	  temp->prev=NULL;
	  temp->next=NULL;
		first=temp;
		last=temp;
	}
	else
	{  temp->next=first;
	temp->prev=NULL;
	first=temp;
}
}
	/*	temp->prev=NULL;
		temp->next=NULL;
		Node *p1=root,*p;
		while(p1!=NULL)
		{
			if(temp->data<p1->data)
			{
				p=p1;
				p1=p1->prev;
			}
			else
			{
				p=p1;
				p1=p1->next;
			}
		}
		if(temp->data<p->data)
		p->prev=temp;
		else
		p->next=temp;
	}
}
void Testing::rec_preorder(Node *temp)
{
	cout<<temp->data;
	rec_preorder(temp->prev);
	rec_preorder(temp->next);
}*/
void TestingBST::display()
{
	cout<<"elements are \n";
	for(temp=first;temp!=NULL;temp=temp->next)
	cout<<temp->data;
}
int main()
{
	int exit;
	TestingBST *obj;
	do{
		cout<<"Enter 1 to Insert() function\n";
		cout<<"Enter 2 to display() function\n";
		int choice;
		cin>>choice;
		switch(choice)
		{
			case 1:
				obj->insert();
				break;
		case 2:
				obj->display();
				break;
			default:cout<<"WRONG CHOICE!\n";
		}
		cout<<"Enter 0 to exit\n";
		cin>>exit;
	}while(exit!=0);
}
