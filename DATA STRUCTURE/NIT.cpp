#include<iostream>
using namespace std;
class NIT
{
	public:
		struct Node
		{
			int data;
			Node *next;
			Node *prev;
		}*temp, *first, *last;
		NIT()
		{
			temp=NULL;
			first=NULL;
			last=NULL;
		}
		void insert();
		void display();
};
void NIT::insert()
{
	temp=new Node;
	cout<<"Enter data\n";
	cin>>temp->data;
	if(first==NULL)
	{
		temp->next=NULL;
		temp->prev=NULL;
		first=temp;
		last=temp;
	}else
	{
		temp->next=first;
		temp->prev=NULL;
		first=temp;
	}
}
void NIT::display()
{
	cout<<"Elements are \n";
	for(temp=first;temp!=NULL;temp=temp->next)
	cout<<temp->data<<endl;
}
int main()
{
	int exit=0;
	NIT obj;
	do{
		cout<<"Enter 1 for insert() function\n";
		cout<<"Enter 2 for display() function\n";
		int choice;
		cin>>choice;
		switch(choice)
		{
			case 1:
				obj.insert();
				break;
			case 2:
				obj.display();
				break;
			default:cout<<"WRONG CHOICE!\n";
		}
		cout<<"Enter 0 to exit\n";
		cin>>exit;
		}while(exit!=0);
		return 0;
	}

