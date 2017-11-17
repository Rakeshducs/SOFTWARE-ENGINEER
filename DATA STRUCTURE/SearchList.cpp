/*Write a program to search an element from a list.Given user the option to perform linear or Binary Search.Use Template functions.
*/
#include<iostream>
using namespace std;
template <class T>
class SearchList
{
	public:
		struct Node
		{
			T data;
			Node *next;
			Node *prev;
		}*temp,*first,*last;
		SearchList()
		{
			temp=NULL;
			first=NULL;
			last=NULL;
		}
		void insertbeg();
		void insertend();
		void insertloc();
		void display();
		void deletebeg();
		void deleteend();
		void deleteloc();
		void LSearch();
		void reverseList();
};
template <class T>
void SearchList<T>::insertbeg()
{
cout<<"Enter the data \n";
T n;
cin>>n;
temp=new Node();
temp->data=n;
temp->next=NULL;
temp->prev=NULL;
if(first==NULL)
{
	first=temp;
	last=temp;
	
}else
{
	temp->next=first;
    first->prev=temp;
    first=temp;
}
}
template <class T>
void SearchList<T>::insertend()
{
	cout<<"Enter the data \n";
	T n;
	cin>>n;
	temp=new Node();
	temp->data=n;
	temp->next=NULL;
	temp->prev=NULL;
	if(last==NULL)
	{
		first=temp;
		last=temp;
	}
	else
	{
		last->next=temp;
		temp->prev=last;
		last=temp;
	}
}
template <class T>
void SearchList<T>::insertloc()
{
	if(first==NULL)
	{
		cout<<"List is EMPTY .....Enter the first data \n";
		T n;
		cin>>n;
		temp=new Node();
		temp->data=n;
		temp->next=NULL;
		temp->prev=NULL;
		first=temp;
		last=temp;
	}else
	{
	cout<<"Enter the location \n";
	int p;
	cin>>p;
	int count=0;
	for(temp=first;temp!=NULL;temp=temp->next)
	count++;
	if(p>count+1)
	cout<<"SORRY! Your position does not exist \n";
	else
	{
	cout<<"Enter the data \n";
	T n;
	cin>>n;
	temp=new Node();
	temp->data=n;
	temp->next=NULL;
	temp->prev=NULL;
	Node* temp1=first;
	for(int i=1;i<p-1;i++)
	temp1=temp1->next;
	temp->next=temp1->next;
	temp1->prev=temp;
	temp->prev=temp1;
	temp1->next=temp;	
	}
	
}
}
template <class T>
void SearchList<T>::deletebeg()
{
	if(first==NULL)
	cout<<"SORRY! Your List is empty \n";
	else
	{
		temp=first;
		first=first->next;
		cout<<"Deleted data is "<<temp->data;
		delete temp;
	}
}
template <class T>
void SearchList<T>::deleteend()
{
	if(last==NULL)
	cout<<"SORRY! Your list is empty \n";
	else
	{
		temp=last;
		last=last->prev;
		cout<<"Deleted datat is "<<temp->data;
		delete temp;
	}
}
template <class T>
void SearchList<T>::deleteloc()
{
	if(first==NULL)
	cout<<"SORRY! YOur list is empty \n";
	else
	{
		cout<<"Enter the position \n";
		int p;
		cin>>p;
		int count=0;
	for(temp=first;temp!=NULL;temp=temp->next)
	count++;
	if(p>count)
	cout<<"SORRY! Your position does not exist \n";
	else
	{
		Node *temp1=first;
		for(int i=1;i<p-1;i++)
		temp1=temp1->next;
		Node* del=temp1->next;
		temp1->next=temp1->next->next;
		temp1->next->next->prev=temp1;
		cout<<"Deleted data is "<<del->data;
		delete del;
	}
		
	}
}
template <class T>
void SearchList<T>::display()
{
	cout<<"List's elements are following \n";
	for(temp=first;temp!=NULL;temp=temp->next)
	cout<<temp->data<<endl;
}
template <class T>
void SearchList<T>::LSearch()
{
	cout<<"Enter the number which You want to search \n";
	T num;
	int count=0,ind=0;
	cin>>num;
	for(temp=first;temp!=NULL;temp=temp->next)
	{
		count++;
		if(num==temp->data)
		{
			ind=1;
			break;
		}
	}
	if(ind==1)
	cout<<"CONGRATULATION BRO! Your Data is present at position "<<count<<endl;
	else
	cout<<"SORRY! Bro YOur Data is not present in the list \n";
}
int main()
{
	int exit=0;
	cout<<"Enter 1 for Integer \n";
	cout<<"Enter 2 for character \n";
	cout<<"Enter 3 for float \n";
	cout<<"Enter 4 for double \n";
	int t;
	cin>>t;
	if(t==1)
	{ SearchList<int> obj;
	do{
		cout<<"Enter 1 to insertbeg() function \n";
		cout<<"Enter 2 to insertend() function \n";
		cout<<"Enter 3 to insertloc() function \n";
		cout<<"Enter 4 to deletebeg() function \n";
		cout<<"Enter 5 to deleteend() function \n";
		cout<<"Enter 6 to deleteloc() function \n";
		cout<<"Enter 7 to display() function \n";
		cout<<"Enter 8 to LSearch() function \n";
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
			case 8:
				obj.LSearch();
				break;
			default:cout<<"WRONG CHIOICE ! \n";
			
		}
		cout<<"Enter 0 to exit and non-zero to continue \n";
		cin>>exit;
		
	}while(exit!=0);
}else if(t==2)
{
	SearchList<char> obj;
	do{
		cout<<"Enter 1 for insertbeg() function \n";
		cout<<"Enter 2 for insertend() function \n";
		cout<<"Enter 3 for insertloc() function \n";
		cout<<"Enter 4 for deletebeg() function \n";
		cout<<"Enter 5 for deleteend() function \n";
		cout<<"Enter 6 for deleteloc() function \n";
		cout<<"Enter 7 for display() function \n";
		cout<<"Enter 8 for LSearch() function \n";
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
			case 8:
				obj.LSearch();
				break;
			default:cout<<"WRONG CHOICE ! \n";
			
		}
		cout<<"Enter 0 to exit and non-zero to continue \n";
		cin>>exit;
	}while(exit!=0);
}else if(t==3)
{
	
	SearchList<float> obj;
	do{
		cout<<"Enter 1 for insertbeg() function \n";
		cout<<"Enter 2 for insertend() function \n";
		cout<<"Enter 3 for insertloc() function \n";
		cout<<"Enter 4 for deletebeg() function \n";
		cout<<"Enter 5 for deleteend() function \n";
		cout<<"Enter 6 for deleteloc() function \n";
		cout<<"Enter 7 for display() function \n";
		cout<<"Enter 8 for LSearch() function \n";
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
			case 8:
				obj.LSearch();
				break;
			default:cout<<"WRONG CHOICE ! \n";
			
		}
		cout<<"Enter 0 to exit and non-zero to continue \n";
		cin>>exit;
	}while(exit!=0);
}else if(t==4)
{
	
	SearchList<double> obj;
	do{
		cout<<"Enter 1 for insertbeg() function \n";
		cout<<"Enter 2 for insertend() function \n";
		cout<<"Enter 3 for insertloc() function \n";
		cout<<"Enter 4 for deletebeg() function \n";
		cout<<"Enter 5 for deleteend() function \n";
		cout<<"Enter 6 for deleteloc() function \n";
		cout<<"Enter 7 for display() function \n";
		cout<<"Enter 8 for LSearch() function \n";
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
			case 8:
				obj.LSearch();
				break;
			default:cout<<"WRONG CHOICE ! \n";
			
		}
		cout<<"Enter 0 to exit and non-zero to continue \n";
		cin>>exit;
	}while(exit!=0);
}else
cout<<"WRONG CHOICE \n";
}

