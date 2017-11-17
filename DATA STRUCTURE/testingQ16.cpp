/*Write a menu driven program to implement the following sorting and searching algorithms:
a) Bubble sort
b) Insertion
c) Selection
d) Merge Sort
e) Quick sort
f) Linear Search
g) Binary Search
*/
#include<iostream>
using namespace std;
class SortingSearching
{
	public:
		int *array, size;
		SortingSearching(int n)
		{
			size=n;
			array=new int[size];
		}
		void InsertValue();
		void BubbleSort();
		void InsertionSort();
		void SelectionSort();
		int Partition(int*,int,int);
		void MergeSort(int*);
		void Merge(int*,int*,int*);
		void Partition(int*);
		void QuickSort(int*,int,int);
		void LinearSearch();
		void BinarySearch();
		void Display();
};
void SortingSearching::InsertValue()
{
	cout<<"Enter the "<<size<<" elements of the array \n";
	for(int i=0;i<size;i++)
	cin>>array[i];
}
void SortingSearching::BubbleSort()
{
	for(int i=0;i<size;i++)
	{
		for(int j=0;j<size-1;j++)
		{
			if(array[j]>array[j+1])
			{
				int temp=array[j];
				array[j]=array[j+1];
				array[j+1]=temp;
			}
		}
	}
}
void SortingSearching::InsertionSort()
{
	for(int i=1;i<size;i++)
	{
		int temp=array[i],p=i;
		for(int j=i-1;j>=0;j--)
		{
			if(temp<array[j])
			{
				array[j+1]=array[j];
				p=j;
			}
		}
		array[p]=temp;
	}
}
void SortingSearching::SelectionSort()
{
	for(int i=0;i<size-1;i++)
	{
		int small=array[i],p=i;
		for(int j=i+1;j<size;j++)
		{
			if(small>array[j])
			{
				small=array[j];
				p=j;
			}
		}
		int temp=array[p];
		array[p]=array[i];
		array[i]=temp;
	}
}
void SortingSearching::Merge(int* L,int* R,int* A)
{
	int nL=0,nR=0;
	while(L[nL]!='\0')
	nL++;
	while(R[nR]!='\0')
	nR++;
	int i=0,j=0,k=0;
	while(i<nL&&j<nR)
	{
		if(L[i]<R[j])
		{
			A[k]=L[i];
			i++;
			k++;
		}else
		{
			A[k]=R[j];
			j++;
			k++;
		}
	}
	while(i<nL)
	{
		A[k]=L[i];
		k++;
		i++;
	}
	while(j<nR)
	{
		A[k]=R[j];
		k++;
		j++;
	}
}
void SortingSearching::MergeSort(int* array)
{
	int n=0;
	while(array[n]!='\0')
	n++;
	if(n<2)
	return;
	int mid=n/2;
	int* left,*right;
	left=new int[mid];
	right=new int[n-mid];
	for(int i=0;i<mid;i++)
	left[i]=array[i];
	for(int i=mid,t=0;i<n;i++)
	right[i-mid]=array[i];
	MergeSort(left);
	MergeSort(right);
	Merge(left,right,array);
}
 int SortingSearching::Partition(int* A,int start,int end)
{
	int pivot=A[end];
	int pIndex=start;
	for(int i=start;i<=end;i++)
	{
		if(A[i]<pivot)
		{
			int temp=A[i];
			A[i]=A[pIndex];
			A[pIndex]=temp;
			pIndex++;
		}
	}
	int temp=A[end];
	A[end]=A[pIndex];
	A[pIndex]=temp;
	return pIndex;
}
void SortingSearching::QuickSort(int* A,int start,int end)
{
	int pIndex=0;
	if(start<end)
	{
		pIndex=Partition(A,start,end);
		QuickSort(A,start,pIndex-1);
		QuickSort(A,pIndex+1,end);
	}
}
void SortingSearching::LinearSearch()
{
	cout<<"Enter the number which You want to search out \n";
	int n;
	cin>>n;
	for(int i=0;i<size;i++)
	{
		if(n==array[i])
		cout<<"Congratulation! Your number is present at position = "<<i+1;
		break;
	}
}
void SortingSearching::BinarySearch()
{
	cout<<"Enter the number which you want to search out \n";
	int n;
	cin>>n;
	int L=0,U=n-1,mid=0;
	while(L<=U)
	{
		mid=(L+U)/2;
		if(array[mid]==n)
		{
			cout<<"Congratulation! Your number is present at position ="<<mid+1;
			break;
		}
		else if(n<array[mid])
		{
			U=mid-1;
		}else
		L=mid+1;
	}
}
void SortingSearching::Display()
{
	cout<<"Elements are following \n";
	for(int i=0;i<size;i++)
	cout<<array[i]<<endl;
}
int main()
{ int exit;
	cout<<"Enter the size of the array \n";
	int size;
	cin>>size;
	SortingSearching obj(size);
	do{
		cout<<"Enter 1 to insert() function \n";
		cout<<"Enter 2 for BubbleSorting() function \n";
		cout<<"Enter 3 for SelectionSorting() function\n";
		cout<<"Enter 4 for InsertionSorting() function \n";
		cout<<"Enter 5 for MergeSorting() function\n";
		cout<<"Enter 6 for QuickSorting() function \n";
		cout<<"Enter 7 for LinearSearching() function\n";
		cout<<"Enter 8 for BinarySearching() function \n";
		cout<<"Enter 9 for Display() function \n";
		int choice;
		cin>>choice;
		switch(choice)
		{
			case 1:
				obj.InsertValue();
				break;
			case 2:
				obj.BubbleSort();
				break;
			case 3:
				obj.SelectionSort();
				break;
			case 4:
				obj.InsertionSort();
				break;
			case 5:
				obj.MergeSort(obj.array);
				break;
			case 6:
				obj.QuickSort(obj.array,0,size-1);
				break;
			case 7:
				obj.LinearSearch();
				break;
			case 8:
				obj.BinarySearch();
				break;
			case 9:
				obj.Display();
				break;
			default:cout<<"WRONG CHOICE ! \n";
		}
		cout<<"Enter 0 to exit and nonzero to continue \n";
		cin>>exit;
			}while(exit!=0);
}
