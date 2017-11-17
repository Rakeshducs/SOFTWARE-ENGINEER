#include<iostream>
using namespace std;
class Queue
{
	public:
		int rear,front,size;
		int *Que;
		Queue(int s)
		{
			rear=-1;
			front=-1;
			size=s;
			Que=new int[size];
		}
		void InsertQ();
		void DeleteQ();
		void Display();
};
void Queue::InsertQ()
{
	if(rear==size-1)
	cout<<"SORRY! Your Quee is FULL \n";
	else if(rear==-1)
	{
		cout<<"Enter the Quee's Elements\n";
		int n;
		cin>>n;
		Que[++rear]=n;
		front++;
	}else
	{
		cout<<"Enter the Quee's Elements \n";
		int n;
		cin>>n;
		Que[++rear]=n;
	}
}
void  Queue::DeleteQ()
{
	if(front==-1)
	cout<<"SORRY! Your Quee is EMPTY\n";
	else if(front==size-1)
	{
	cout<<"Deleted Element is "<<Que[front];
	front=-1;
	rear=-1;	
	}else
	{
		cout<<"Deleted Element is "<<Que[front++];
	}
}
void Queue::Display()
{
	cout<<"Quee's Elements are as follows\n";
	for(int i=front;i<=rear;i++)
	cout<<Que[i]<<endl;
}
int main()
{
	cout<<"Enter the size of the Quee\n";
	int s;
	cin>>s;
	Queue *obj=new Queue(s);
	char ch;
	do{
		cout<<"Enter 1 to InsertQ() function\n";
		cout<<"Enter 2 to DeleteQ() function\n";
		cout<<"Enter 3 to Display() function\n";
		int choice;
		cin>>choice;
		switch(choice)
		{
			case 1:
				obj->InsertQ();
				break;
			case 2:
				obj->DeleteQ();
				break;
			case 3:
				obj->Display();
				break;
			default:cout<<"WRONG CHOICE!\n";
		}
		cout<<"Enter Y to continue and N to exit\n";
		cin>>ch;
	}while(ch=='Y'||'y');
	return 0;
}
				
		
