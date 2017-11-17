#include<iostream>
using namespace std;
class stack
{
	public:
		int top,size;
		int *tack;
		stack(int s)
		{
			size=s;
			top=-1;
			tack=new int[size];
		}
		void push();
		int pop();
		void display();
};
void stack::push()
{
	if(top==size-1)
	cout<<"Your Stack is Overflow\n";
	else
	{
		cout<<"Enter elements to Push into Stack\n";
		int n;
		cin>>n;
		tack[++top]=n;
	}
}
int stack::pop()
{
	if(top==-1)
	cout<<"Your Stack is Underflow\n";
	else
	{
		return tack[top--];
	}
}
void stack::display()
{
	cout<<"STACKS' Elements are as follows\n";
	for(int i=top;i>=0;i--)
	cout<<tack[i]<<endl;
}

