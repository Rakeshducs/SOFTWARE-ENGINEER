#include<iostream>
using namespace std;
class Diagonal
{
int *d;
int n;
public:
Diagonal(int size)
{
n=size;
d=new int[n];
	}	
~Diagonal()
{
	delete d;
}
void store(int ,int,int);
void retrieve(int,int);
void show();
};
void Diagonal::store(int i,int j,int x)
{
	if(i>n||j>n||i<0||j<0)
	{
	cout<<"INVALID POSITION\n";
	exit(0);
}else
if(i==j&&x==0)
{
	cout<<"SORRY! Your Matrix is NOT DIAGONAL MATRIX \n";
	exit(0);
}else
if(i!=j&&x!=0)
{
cout<<"SORRY! Your Matrix is NOT DIAGONAL MATRIX \n";
exit(0);
}else
if(i==j&&x!=0)
{
	d[i]=x;
}
}
void Diagonal::retrieve(int i,int j)
{
	if(i==j)
	cout<<"YOur retrieved element is "<<d[i];
	else
	cout<<"Your retrieved element is 0";
}
void Diagonal::show()
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(i==j)
			cout<<d[i];
			else
			cout<<"0";
		}
		cout<<endl;
	}
}
int main()
{
	int exit=0;
	cout<<"Enter the size of Matrix \n";
	int m,n;
	cin>>m>>n;
	if(m!=n)
	cout<<"SORRY!..INVALID SIZE m and n should be equal \n";
	else
	{
		Diagonal obj(m);
		do{
			cout<<"Enter 1 for store(int i,int j,int x) function \n";
			cout<<"Enter 2 for retrieve(int,int) function \n";
			cout<<"Enter 3 for show() function \n";
			int choice;
			cin>>choice;
			switch(choice)
			{
				case 1:
					cout<<"Enter elements \n";
					for(int i=0;i<m;i++)
					{
						for(int j=0;j<m;j++)
						{
							int x;
							cin>>x;
							obj.store(i,j,x);
						}
					}
					break;
				case 2:
					cout<<"Enter position to retrieve value \n";
					int i,j;
					cin>>i>>j;
					obj.retrieve(i,j);
					break;
				case 3:
					obj.show();
					break;
				default:cout<<"WRONG CHOICE! \n";
			}
			cout<<"Enter 0 to exit and non-zero to continue\n";
			cin>>exit;
		}while(exit!=0);
	}
}

