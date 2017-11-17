#include<iostream>
using namespace std;
template <class T>
class stack
{
	public:
		int size,top;
		T* tack;
		stack()
		{
			top=-1;
		size=10;
		tack=new T[size];	
		}
		void push(T);
		T pop();
	
};
template <class T>
void stack<T>::push(T t)
{
  if(top==-1)
  {
  	tack[++top]=t;
   } else
   tack[++top]=t;
}
template <class T>
T stack<T>::pop()
{
    if(top>=0)
    {
    	return tack[top--];
	}
}


