/*Question:16- WAP to reverse the order of the elements in the stack using a additional stack.*/
#include<iostream>
using namespace std;
template <class T>
class Stack
{
	public:
		T *tack;
		int size,top;
		Stack(int n)
		{
			top=-1;
			size=n;
			tack=new T[size];
		}
		void PUSH(int);
		 void  POP();
		void Display();
};
template <class T>
void Stack<T>::PUSH(int n)
{
	if(top==size-1)
	{
		cout<<"STACK IS OVERFLOW \n";
		
	}else
	{
		tack[++top]=n;
	}
}
template <class T>
void Stack<T>::POP()
{
	if(top==-1)
	cout<<"STACK IS UNDER FLOW \n";
	else
	{
		cout<<"POPED ELEMENT IS ="<<tack[top--];
	}
}
template <class T>
void Stack<T>::Display()
{
	if(top==-1)
	cout<<"SORRY! Your stack is empty \n";
	else
	{
		for(int i=0;i<=top;i++)
		cout<<tack[i]<<" ";
	}
	cout<<endl;
}

int main()
{
	cout<<"Enter the size of the stack \n";
	int n;
	cin>>n;
	Stack<int> s1(n);
	Stack<int> s2(n);
	while(1)
	{
	cout<<"\t Enter 1 for PUSH() function \n";
	cout<<"\t Enter 2 for POP() function \n";
	cout<<"\t Enter 3 for Display() function \n";
	cout<<"\t Enter 4 to reverse the elements of Stack \n";
	int choice;
	cin>>choice;
	switch(choice)
	{
		case 1:
			cout<<"Enter the element \n";
			int num;
			cin>>num;
			s1.PUSH(num);
			break;
		case 2:
			s1.POP();
			break;
		case 3:
			cout<<"STACK ELEMENTS ARE FOLLOWING \n";
			s1.Display();
			break;
		case 4:
			cout<<"Initially order of elements are following \n";
			s1.Display();
			for(int i=s1.top;i>=0;i--)
			s2.PUSH(s1.tack[i]);
			cout<<"Reversed order elements are following \n";
			s2.Display();
			break;
		default:cout<<"WRONG CHOICE!\n";
			
	}
	cout<<"Enter 0 to exit and nonzero to  conitnue \n";
	int exit;
	cin>>exit;
	if(exit==0)
	break;
}
}
