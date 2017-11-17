#include<iostream>
using namespace std;
template <class T>
class Question1
{
	public:
		T *array;
		int size;
		Question1(int a)
		{
			size=a;
			array=new T[size];
		}
		void insert();
		void LinearSearch();
		void BinarySearch();
		void display();
		
};
template <class T>
void Question1<T>::insert()
{
	cout<<"Enter the "<<size<<" elements of array \n";
	for(int i=0;i<size;i++)
	cin>>array[i];
}
template <class T>
void Question1<T>::display()
{
	for(int i=0;i<size;i++)
	cout<<array[i]<<endl;
}
template <class T>
void Question1<T>::LinearSearch()
{
	cout<<"Enter the number which You want to search out \n";
	int num,ind=0;
	cin>>num;
	for(int i=0;i<size;i++)
	if(num==array[i])
	{
		cout<<"CONGRATULATION BRO! Your number is present at position "<<(i+1)<<" in the array list \n";
		ind=1;
		break;
	}
	if(ind==0)
	cout<<"SORRY! Bro Your number is not present in the array list \n";
}
template <class T>
void Question1<T>::BinarySearch()
{
	cout<<"Enter the number which You want to search out \n";
	int num,ind=0;
	cin>>num;
	int L=0,U=size-1,mid=0;
	while(L<=U)
	{
		mid=(L+U)/2;
		if(num==array[mid])
		{		cout<<"CONGRATULATION BRO! Your number is present at position "<<(mid+1)<<endl;
		ind=1;
		break;
	}
		else if(num>array[mid])
			L=mid+1;
			else
			U=mid-1;
		
	}
	if(ind==0)
	cout<<"SORRY! Bro Your number is not present in the array list \n";
	
}
int main()
{
	int exit=0;
	cout<<"Enter 1 for Integer data type array \n";
	cout<<"Enter 2 for Character data type array \n";
	cout<<"Enter 3 for Double data type array \n";
	cout<<"Enter 4 for Float data type array \n";
	int n;
	cin>>n;
	if(n==1)
	{
		cout<<"Enter the size of the array \n";
		int s;
		cin>>s;
		Question1<int> obj(s);
	do{
		cout<<"Enter 1 for insert() function\n";
		cout<<"Enter 2 for display() function \n";
		cout<<"Enter 3 for LinearSearch() function \n";
		cout<<"Enter 4 for BinarySearch() function \n";
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
				obj.LinearSearch();
				break;
			case 4:
				obj.BinarySearch();
				break;
			default:cout<<"Wrong choice ! \n";
		}
		cout<<"Enter 0 to exit and nonzero to continue \n";
		cin>>exit;
	}while(exit!=0);
}else if(n==2)
{
	cout<<"Enter the size of the array \n";
		int s;
		cin>>s;
		Question1<char> obj(s);
	do{
		cout<<"Enter 1 for insert() function\n";
		cout<<"Enter 2 for display() function \n";
		cout<<"Enter 3 for LinearSearch() function \n";
		cout<<"Enter 4 for BinarySearch() function \n";
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
				obj.LinearSearch();
				break;
			case 4:
				obj.BinarySearch();
				break;
			default:cout<<"Wrong choice ! \n";
		}
		cout<<"Enter 0 to exit and nonzero to continue \n";
		cin>>exit;
	}while(exit!=0);
}else if(n==3)
{
	cout<<"Enter the size of the array \n";
		int s;
		cin>>s;
		Question1<double> obj(s);
	do{
		cout<<"Enter 1 for insert() function\n";
		cout<<"Enter 2 for display() function \n";
		cout<<"Enter 3 for LinearSearch() function \n";
		cout<<"Enter 4 for BinarySearch() function \n";
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
				obj.LinearSearch();
				break;
			case 4:
				obj.BinarySearch();
				break;
			default:cout<<"Wrong choice ! \n";
		}
		cout<<"Enter 0 to exit and nonzero to continue \n";
		cin>>exit;
	}while(exit!=0);
}else if(n==4)
{
	cout<<"Enter the size of the array \n";
		int s;
		cin>>s;
		Question1<float> obj(s);
	do{
		cout<<"Enter 1 for insert() function\n";
		cout<<"Enter 2 for display() function \n";
		cout<<"Enter 3 for LinearSearch() function \n";
		cout<<"Enter 4 for BinarySearch() function \n";
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
				obj.LinearSearch();
				break;
			case 4:
				obj.BinarySearch();
				break;
			default:cout<<"Wrong choice ! \n";
		}
		cout<<"Enter 0 to exit and nonzero to continue \n";
		cin>>exit;
	}while(exit!=0);
}
else
cout<<"WRONG CHOICE ! \n";
}
