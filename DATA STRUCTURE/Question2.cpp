#include<iostream>
using namespace std;
template <class T>
class Sorting
{
public:
	T *array;
	int size;
	Sorting(int a)
	{
		size=a;
		array=new T[size];
	}
	void insert();
	void display();
	void Insertion_sort();
	void Bubble_sort();
	void Selection_sort();
};
template <class T>
void Sorting<T>::insert()
{
	cout<<"Enter "<<size<<" elements of list \n";
	for(int i=0;i<size;i++)
	cin>>array[i];
}
template <class T>
void Sorting<T>::display()
{
	cout<<"Your elements are following \n";
	for(int i=0;i<size;i++)
	cout<<array[i]<<endl;
}
template <class T>
void Sorting<T>::Insertion_sort()
{
	for(int i=1;i<size;i++)
	{
		int temp=array[i],p=i;
		for(int j=i-1;j>=0;j--)
		if(temp<array[j])
		{
		array[j+1]=array[j];
		p=j;
		}
		array[p]=temp;
		
	}
}
template <class T>
void Sorting<T>::Bubble_sort()
{
	for(int i=0;i<size;i++)
	{
		for(int j=0;j<size-1;j++)
		if(array[j+1]>array[j])
		{
			int temp=array[j+1];
			array[j+1]=array[j];
			array[j]=temp;
		}
	}
}
template <class T>
void Sorting<T>::Selection_sort()
{
	for(int i=0;i<size;i++)
	{
		int small=array[i],pos=i;
		for(int j=i+1;j<size;j++)
		{
			if(small>array[j])
			{
				small=array[j];
				pos=j;
			}
		}
		int temp=array[i];
		array[i]=small;
		array[pos]=temp;
	}
}
int main()
{
	int exit=0;
	cout<<"Enter 1 for Integer type array \n";
	cout<<"Enter 2 for Character type array \n";
	cout<<"Enter 3 for Double type array \n";
	cout<<"Enter 4 for float type array \n";
	int n;
	cin>>n;
	if(n==1)
	{
		cout<<"Enter the size of the array \n";
		int i;
		cin>>i;
		Sorting<int>obj(i);
	do{
		cout<<"Enter 1 for Insert() function\n";
		cout<<"Enter 2 for Display() function \n";
		cout<<"Enter 3 for Insertion_sort() function\n";
		cout<<"Enter 4 for Bubble_sort() function \n";
		cout<<"Enter 5 for Selection_sort() function\n";
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
			case 3:
				obj.Insertion_sort();
				break;
			case 4:
				obj.Bubble_sort();
				break;
			case 5:
				obj.Selection_sort();
				break;
			default:cout<<"WRONG CHOICE ! \n";
		}
		cout<<"Enter 0 to exit and non-zero to continue \n";
		cin>>exit;
		
	}while(exit!=0);
}else if(n==2)
{
	cout<<"Enter the size of the array \n";
	int i;
	cin>>i;
		Sorting<char> obj(i);
	do{
		cout<<"Enter 1 for Insert() function\n";
		cout<<"Enter 2 for Display() function \n";
		cout<<"Enter 3 for Insertion_sort() function\n";
		cout<<"Enter 4 for Bubble_sort() function \n";
		cout<<"Enter 5 for Selection_sort() function\n";
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
			case 3:
				obj.Insertion_sort();
				break;
			case 4:
				obj.Bubble_sort();
				break;
			case 5:
				obj.Selection_sort();
				break;
			default:cout<<"WRONG CHOICE ! \n";
		}
		cout<<"Enter 0 to exit and non-zero to continue \n";
		cin>>exit;
		
	}while(exit!=0);
}else if(n==3)
{
	cout<<"Enter the size of the array \n";
	int i;
	cin>>i;
		Sorting<double> obj(i);
	do{
		cout<<"Enter 1 for Insert() function\n";
		cout<<"Enter 2 for Display() function \n";
		cout<<"Enter 3 for Insertion_sort() function\n";
		cout<<"Enter 4 for Bubble_sort() function \n";
		cout<<"Enter 5 for Selection_sort() function\n";
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
			case 3:
				obj.Insertion_sort();
				break;
			case 4:
				obj.Bubble_sort();
				break;
			case 5:
				obj.Selection_sort();
				break;
			default:cout<<"WRONG CHOICE ! \n";
		}
		cout<<"Enter 0 to exit and non-zero to continue \n";
		cin>>exit;
		
	}while(exit!=0);
}else if(n==4)
{
	cout<<"Enter the size of the array \n";
	int i;
		Sorting<float> obj(i);
	do{
		cout<<"Enter 1 for Insert() function\n";
		cout<<"Enter 2 for Display() function \n";
		cout<<"Enter 3 for Insertion_sort() function\n";
		cout<<"Enter 4 for Bubble_sort() function \n";
		cout<<"Enter 5 for Selection_sort() function\n";
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
			case 3:
				obj.Insertion_sort();
				break;
			case 4:
				obj.Bubble_sort();
				break;
			case 5:
				obj.Selection_sort();
				break;
			default:cout<<"WRONG CHOICE ! \n";
		}
		cout<<"Enter 0 to exit and non-zero to continue \n";
		cin>>exit;
		
	}while(exit!=0);
}else
cout<<"WRONG CHOICE Hi!\n";
}
