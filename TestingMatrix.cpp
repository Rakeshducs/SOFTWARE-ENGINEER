#include<iostream>
using namespace std;
int main()
{
	int **M;
	cout<<"Enter the size of Matrix m*n\n";
	int m,n;
	cin>>m>>n;
	M=new int*[m];
	for(int i=0;i<m;i++)
	M[i]=new int[n];
	cout<<"Enter "<<m*n<<" elements of Matrix\n";
	for(int i=0;i<m;i++)
	{
	for(int j=0;j<n;j++)
	cin>>M[i][j];
}
cout<<"Your Matrix is \n";
for(int i=0;i<m;i++)
{
	for(int j=0;j<n;j++)
	cout<<M[i][j];
	cout<<endl;
}
}
