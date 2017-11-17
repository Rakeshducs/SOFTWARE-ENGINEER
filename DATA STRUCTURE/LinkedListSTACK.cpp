#include<iostream>
using namespace std;
class LinkedListStack
{ 

	public:
	int top;
		struct Node
		{
			int data;
			Node *next;
			Node *prev;
		}*temp,*first,*last;
		LinkedListStack()
		{
			temp=NULL;
			first=NULL;
			last=NULL;
			top=-1;
		}
		void PUSH(int);
		int POP();
		void Display();
};
void LinkedListStack::PUSH(int a)
{
	temp=new Node();
	temp->data=a;
	temp->next=NULL;
	temp->prev=NULL;
	if(first==NULL)
	{
		
		first=temp;
		last=temp;
		top=top+1;
	}else
	{
		last->next=temp;
		temp->prev=last;
		last=temp;
		top=top+1;
	}
}
int LinkedListStack::POP()
{
	if(last==NULL)
	{
		top=-1;
	cout<<"Stack is Underflow \n";
}
	else
	{
     temp=last;
	 last=last->prev;	
	last->next=NULL;
	top=top-1;
		return temp->data;
	}
}
void LinkedListStack::Display()
{
	cout<<"STACK ELEMENTS ARE \n";
	if(first==NULL)
	cout<<"SORRY! Your Stack is EMPTY \n";
	else
	for(temp=last;temp!=first;temp=temp->prev)
	if(temp!=NULL)
	cout<<temp->data<<endl;
	if(temp!=NULL)
	cout<<temp->data<<endl;
}
int main()
{
	int exit=0;
	LinkedListStack obj;
	do{
		cout<<"Enter 1 to call PUSH() function \n";
		cout<<"Enter 2 to call POP() function \n";
		cout<<"Enter 3 to call Display() function \n";
		int choice;
		cin>>choice;
		switch(choice)
		{
			case 1:
				cout<<"Enter element to PUSH \n";
				int n;
				cin>>n;
				obj.PUSH(n);
				break;
			case 2:
				cout<<obj.POP();
				break;
			case 3:
				obj.Display();
				break;
			default:cout<<"WRONG CHOICE \n";
		}
		cout<<"Enter 0 to exit and nonzero to continue \n";
		cin>>exit;
	}while(exit!=0);
}
