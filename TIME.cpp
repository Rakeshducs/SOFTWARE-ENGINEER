#include<iostream>
#include<ctime>
using namespace std;
int main()
{
	time_t now=time(0);
	char* dt=ctime(&now);
	if(int(dt[0]==int('M')))
	{
		cout<<" TODAYS' TIME_TABLE \n";
		cout<<" 12:30 = MATHS \n";
		cout<<" 1:30  = COMPUTER NETWORK \n";
		cout<<" 3:30  = OPERATING SYSTEM\n";
	}
	if(int(dt[0])==int('T')&&int(dt[1])==int('u'))
	{
		cout<<" TODAYS' TIME_TABLE IS \n";
		cout<<" 8:30 = DATA STRUCTURE LAB \n";
		cout<<" 1:30 = COMPUTER NETWORK\n";
		cout<<" 3:30 = OPERATING SYSTEM\n";
	}
	if(int(dt[0])==int('W'))
	{
		cout<<" TODAYS' TIME_TABLE IS \n";
		cout<<" 8:30 = DATA STRUCTURE \n";
		cout<<" 10:30 = ANDROID PROGRAMMING\n";
		cout<<" 12:30 = MATHS \n";
	}
	if(int(dt[1])==int('h'))
	{
		cout<<"TODAYS TIME_TABLE IS \n";
		cout<<"8:30 = DATA STRUCTURE \n";
		cout<<"10:30 = ANDROID PROGRAMMING\n";
		cout<<"12:30 = MATHS \n";
	}
	if(int(dt[0])==int('F'))
	{
		cout<<"TODAYS TIME_TABLE IS \n";
		cout<<"12:30 = MATHS \n";
		cout<<"3:30 = OPERATING SYSTEM\n";
	}
	if(int(dt[0])==int('S')&&int(dt[1])==int('a'))
	{
		cout<<"TODAYS TIME_TABLE IS \n";
		cout<<"8:30 = COMPUTER NETWORK LAB \n";
		cout<<"1:30 = ANDROID PROGRAMMING LAB \n";
		cout<<"3:30 = OPERATING SYSTEM \n";
	}
	else if(int(dt[0])==int('S'))
	cout<<"ENJOY! YOUR SUNDAY......**\n";
}
