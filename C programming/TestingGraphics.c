#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<graphics.h>
int main()
{
	clrscr();
	int driver=DETECT,mode;
	initgraph(&driver,&mode,"c:\\tc\\bgi");
	putpixels(300,200,WHITE);
	getch();
	closegraph();
	return 0;
}
