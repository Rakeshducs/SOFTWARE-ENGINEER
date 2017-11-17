#include<iostream>
using namespace std;
class Shortest_Path
{
	public:
		int **M,m,n;
		Shortest_Path(int a,int b)
		{
			m=a;
			n=b;
			M=new int*[m];
			for(int i=0;i<m;i++)
			M[i]=new int[n];
			for(int i=0;i<m;i++)
			for(int j=0;j<n;j++)
			M[i][j]=0;
			
		}
		void insert();
		void Shortest();
		void display();
		int sumOne(int,int);
		int sumTwo(int,int);
};
int Shortest_Path::sumTwo(int a,int b)
{
	int s=M[a][b],p=a-1;
	while(p>=0)
	{
		for(int t=p;t>=0;t--)
		if(M[t][a]!=0)
		{
			s+=M[t][a]/10;
			a=t;
			p=t;
		}else
		p--;
	}
	return s;
}
int Shortest_Path::sumOne(int a,int b)
{
int s=M[a][b]/10,p=a-1;
while(p>=0)	
{
	for(int i=p;i>=0;i--)
	if(M[i][a]!=0)
	{
		s+=M[i][a]/10;
		a=i;
		p=i;
	}else
	p--;
}
return s;
}
void Shortest_Path::insert()
{
	cout<<"Enter the position in CHARACTER like H,H and Distance \n";
	char a,b;
	cin>>a>>b;
	int i=int(a)-65;
	int j=int(b)-65;
	cin>>M[i][j];
}
void Shortest_Path::Shortest()
{
	cout<<"Finding Shortest PATH..!\n";
	int p1=0,p2=0,q0=0,p0=0,z=0;
for(int i=0;i<m;i++)
{ 
int indi=0;
if(i>0)
{
	z=i;
	i=q0;
}
	for(int j=0;j<n;j++)
	{
		
		if(M[i][j]!=0)
		{ 
		int small=sumTwo(i,j),p1=i,p2=j;
		    for(int u=0;u<=i;u++)
			for(int t=0;t<n;t++)
			if(u<i)
			{
				if(M[u][t]!=0)
				{
					if(M[u][t]%10==0)
					{
						if(sumOne(u,t)<small)
						{
							small=sumOne(u,t);
							p1=u;
							p2=t;
						}
					}
				}
			}else
			{
			if(M[u][t]!=0)
			{
			
			if(small>sumTwo(u,t))
			{
				small=sumTwo(u,t);
				p1=u;
				p2=t;
				}
					
			}
		}
		for(int t=0;t<m;t++)
		{
			if(M[t][p2]!=0)
			{
				if(M[t][p2]>9&&M[t][p2]%10==0&&sumOne(t,p2)<small)
				{
					small=sumOne(t,p2);
					p1=t;
				}else if(sumTwo(t,p2)<small)
				{
					small=sumTwo(t,p2);
					p1=t;
				}
			}
		}
	
	      if(indi==0){
		    if(M[p1][p2]>9&&M[p1][p2]%10==0)
			M[p1][p2]=M[p1][p2]+1;
			else
			M[p1][p2]=M[p1][p2]*10+1;
			p0=p1,q0=p2;
			for(int s=0;s<m;s++)
			{
				if(M[s][p2]!=0&&sumOne(s,p2)!=small)
				{
				
			
				M[s][p2]=0;
			}
			}
			indi=1;
			for(int t=0;t<n;t++)
			if(M[i][t]!=0&&sumOne(i,t)!=small)
			{ 
				if(sumTwo(i,t)>small)
				{
					
				
				M[i][t]=M[i][t]*10+0;
			}
			
		}
	}
		
			
		}

	}
	i=z;
	
	}	
}
void Shortest_Path::display()
{
	cout<<"Your's Path are following \n";
	for(int i=0;i<m;i++)
	for(int j=0;j<n;j++)
	if(M[i][j]!=0)
	{
		if(M[i][j]%10==1)
	cout<<char(65+i)<<" TO "<<char(65+j)<<" "<<sumOne(i,j)<<endl;
	}
	
}
int main()
{
	cout<<"Enter the size of Matrix in CHARACTER like H,H \n";
	char a,b;
	cin>>a>>b;
	int i=int(a)-65;
	int j=int(b)-65;
	Shortest_Path obj(i+1,j+1);
	int exit=0;
	do{
		cout<<"Enter 1 for insert() function\n";
		cout<<"Enter 2 for Shortest() function \n";
		cout<<"Enter 3 for Display() function \n";
		int choice;
		cin>>choice;
		switch(choice)
		{
			case 1:
				obj.insert();
				break;
			case 2:
				obj.Shortest();
				break;
			case 3:
				obj.display();
				break;
			default:cout<<"WRONG CHOICE! \n";
		}
		cout<<"Enter 0 to exit and non-zero to continue \n";
		cin>>exit;
		
	}while(exit!=0);
	return 0;
}
