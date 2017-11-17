/* Question 1:- Write a menu driven program to implement the following sparse matrices using one-dimensional array.
a) Diagonal Matrix
b) Lower Triangular Matrix
c) Upper Triangular Matrix
d) Symmetric Matrix.
*/
#include<iostream>
using namespace std;
template<class T>
class Matrix
{
	T** M;
	int m,n;
	public:
		Matrix(int a,int b)
		{
			m=a;
			n=b;
			M=new T*[m];
			for(int i=0;i<m;i++)
			M[i]=new T[n];
		}
		void insertM();
		void DiagonalM();
		void LowerTriangularM();
		void UpperTriangularM();
		void SymmetricM();
		void DisplayM();
};
template<class T>
void Matrix<T>::insertM()
{
	cout<<"Enter Matrix's Elements \n";
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		cin>>M[i][j];
	}
}
template<class T>
void Matrix<T>::DiagonalM()
{
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(i!=j)
			if(M[i][j]!=0)
			{
				cout<<"SORRY! Your Matrix is not Diagonal Matrix \n";
				break;
			}else if(i==m-1) {
			cout<<"CONGRATULATION:- Your Matrix is Diagonal Matrix \n";
			break;
		}
		}
	}
}
template<class T>
void Matrix<T>::LowerTriangularM()
{
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(i>j)
			{
			if(M[i][j]!=0)
			{
				cout<<"SORRY! Your Matrix is not LowerTriangular Matrix \n";
				break;
			}else if(i==m-1) {
			cout<<"CONGRATULATION:- Your Matrix is LowerTriangular Matrix \n";
			break;
		}
		}
		}
	}

}
template<class T>
void Matrix<T>::UpperTriangularM()
{
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(j>i)
			{
				if(M[i][j]!=0)
				{
					cout<<"SORRY! Your Matrix is not UpperTriangular Matrix \n";
					break;
				}else if(i==m-1) {
				cout<<"CONGRATULATION:- Your Matrix is UpperTriangular Matrix \n";
				break;
			}
			}
		}
	}
}
template<class T>
void Matrix<T>::SymmetricM()
{
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(i!=j)
			{
				if(M[i][j]!=M[j][i])
				{
					cout<<"SORRY! Your Matrix is not SYMMETRIC MATRIX \n";
					break;
				}else if(i==m-1) {
				cout<<"CONGRATULATION:- Your Matrix is SYMMETRIC MATRIX \n";
				break;
			}
			}
		}
	}
}
template<class T>
void Matrix<T>::DisplayM()
{
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		cout<<M[i][j];
		cout<<endl;
	}
}
int main()
{ int exit=0;
	cout<<"Enter the size of the Matrix \n";
	int a,b;
	cin>>a>>b;
	Matrix <int> obj(a,b);
	do{
		cout<<"Enter 1 for insertMatrix() function\n";
		cout<<"Enter 2 for DiagonalMatrix() function\n";
		cout<<"Enter 3 for LowerTriangular_Matrix() function\n";
		cout<<"Enter 4 for UpperTriangular_Matrix() function\n";
		cout<<"Enter 5 for Symmetric_Matrix() function\n";
		cout<<"Enter 6 for Display() function\n";
		int choice;
		cin>>choice;
		switch(choice)
		{
			case 1:
				obj.insertM();
				break;
			case 2:
				obj.DiagonalM();
				break;
			case 3:
				obj.LowerTriangularM();
				break;
			case 4:
				obj.UpperTriangularM();
				break;
			case 5:
				obj.SymmetricM();
				break;
			case 6:
				obj.DisplayM();
				break;
			default:cout<<"WRONG CHOICE!\n";
		}
	cout<<"Enter 0 to exit and non-zero to continue\n";
	cin>>exit;	}while(exit!=0);
	}

