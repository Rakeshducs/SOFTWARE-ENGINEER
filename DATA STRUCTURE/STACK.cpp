#include<iostream>
using namespace std;
class stack
{
	public:
		int temp,size;
		int *tack;
		stack(int s)
		{
			size=s;
			temp=-1;
			tack=new int[size];
		}
		void push();
		int pop();
		void display();
};
void stack::push()
{
	if(temp==size-1)
	cout<<"Your Stack is Overflow\n";
	else
	{
		cout<<"Enter elements to Push into Stack\n";
		int n;
		cin>>n;
		tack[++temp]=n;
	}
}
int stack::pop()
{
	if(temp==-1)
	cout<<"Your Stack is Underflow\n";
	else
	{
		return tack[temp--];
	}
}
void stack::display()
{
	cout<<"STACKS' Elements are as follows\n";
	for(int i=temp;i>=0;i--)
	cout<<tack[i]<<endl;
}/*
int main()
{
	cout<<"Enter the size of Stack\n";
	int s;
	cin>>s;
	stack *obj=new stack(s);
	char ch;
	do{
		cout<<"Enter 1 for PUSH() FUNCTION\n";
		cout<<"Enter 2 for POP() FUNCTION\n";
		cout<<"Enter 3 for DISPLAY() FUNCTION\n";
		int choice;
		cin>>choice;
		switch(choice)
		{
			case 1:
				obj->push();
				break;
			case 2:
				cout<<"Deleted element is "<<obj->pop();
				break;
			case 3:
				obj->display();
				break;
			default:cout<<"WRONG CHOICE!\n";
		}
		cout<<"Enter y to continue and n to exit\n";
		cin>>ch;
	}while(ch=='Y'||'y');
	return 0;
}*/
				
		
