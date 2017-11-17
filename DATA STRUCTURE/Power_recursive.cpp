#include<iostream>
using namespace std;
class Power
{
	public:
		int base,power;
		Power(int a,int b)
		{
			base=a;
			power=b;
		}
		double power_rec(int,int);
};
double Power::power_rec(int a,int b)
{
	if(b==0)
	return 1;
	else
	return a*power_rec(a,--b);
}
int main()
{
	cout<<"Enter a base and power to get its value \n";
	int a,b;
	cin>>a>>b;
	Power obj(a,b);
	double value=obj.power_rec(obj.base,obj.power);
	cout<<"Required value is "<<value;
	
}

