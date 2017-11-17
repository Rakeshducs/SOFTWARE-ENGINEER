#include<iostream>
#include<graphics.h>
#include<conio.h>
using namespace std;
int main()
{
	initwindow(800,500);
	setbkcolor(3);
	cleardevice();
	circle(450,250,250);
	circle(450,250,240);
	circle(450,250,230);
	settextstyle(4,HORIZ_DIR,6);
	outtextxy(230,250,"VirtualLoops");
	getch();
}
