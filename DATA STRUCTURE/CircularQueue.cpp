#include<iostream>
using namespace std;
template <class T>
class CircularQueue
{
	public:
	T *Queue,rear,front,size;
	CircularQueue(int s)
	{
		size=s;
		Queue=new T[size];
		rear=-1;
		front=-1;
	}
	void insertQueue();
	void deleteQueue();
	void displayQueue();
};
template <class T>
void CircularQueue<T>::insertQueue()
{
	if(rear==size-1&&front==0)
	cout<<"SORRY! Your Circular_Queue is FULL\n";
	else if(rear+1==front)
	cout<<"SORRY! Your Circular_Queue is FULL\n";
	else if(rear==-1&&front==-1)
	{
		cout<<"Enter the data\n";
		cin>>Queue[++rear];
		front=0;
		
	}
	else
	{
		cout<<"Enter the data\n";
		cin>>Queue[++rear];
	}
}
template <class T>
void CircularQueue<T>::deleteQueue()
{
	if(rear==-1&&front==-1)
	cout<<"SORRY! Your Circular_Queue is EMPTY\n";
	else if(rear==front)
	{
		int del=Queue[front];
		cout<<"Deleted data is "<<del<<endl;
		front=-1;
		rear=-1;
	}
	else
	{
		cout<<"Deleted data is "<<Queue[front++]<<endl;
		
	}
}
template <class T>
void CircularQueue<T>::displayQueue()
{
	cout<<"Your's Queue elements are as follows\n";
	if(rear>front)
	for(int i=front;i<=rear;i++)
	cout<<Queue[i]<<endl;
	else
	{
		int i=0;
		for(i=front;i<size-1;i++)
		cout<<Queue[i]<<endl;
		for(i=0;i<=rear;i++)
		cout<<Queue[i]<<endl;
	}
}
int main()
{
	int exit;
	cout<<"Enter 1 for Integer data type \n";
	cout<<"Entet 2 for Character data type \n";
	int n;
	cin>>n;
if(n==1)
{
	cout<<"Enter the size of the QUEUE\n";
	int size;
	cin>>size;
	CircularQueue<int> obj(size);
	do{
		cout<<"Enter 1 for InsertQueue() function\n";
		cout<<"Enter 2 for DeleteQueue() function\n";
		cout<<"Enter 3 for DisplayQueue() function\n";
		int choice;
		cin>>choice;
		switch(choice)
		{
			case 1:
				obj.insertQueue();
				break;
			case 2:
				obj.deleteQueue();
				break;
			case 3:
				obj.displayQueue();
				break;
			default:cout<<"WRONG CHOICE!\n";
		}
		cout<<"Enter 0 to exit and non-zero to continue\n";
		cin>>exit;
	}while(exit!=0);
}else if(n==2)
{
	cout<<"Enter the size of the QUEUE\n";
	int size;
	cin>>size;
	CircularQueue<char> obj(size);
	do{
		cout<<"Enter 1 for InsertQueue() function\n";
		cout<<"Enter 2 for DeleteQueue() function\n";
		cout<<"Enter 3 for DisplayQueue() function\n";
		int choice;
		cin>>choice;
		switch(choice)
		{
			case 1:
				obj.insertQueue();
				break;
			case 2:
				obj.deleteQueue();
				break;
			case 3:
				obj.displayQueue();
				break;
			default:cout<<"WRONG CHOICE!\n";
		}
		cout<<"Enter 0 to exit and non-zero to continue\n";
		cin>>exit;
	}while(exit!=0);
}else 
cout<<"Wrong choice \n";
	return 0;
}
