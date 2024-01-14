#include <iostream>
#include <conio.h>
#include <graphics.h>
#include <dos.h>
using namespace std;

void bfill(int x,int y,int fill,int border)
{
	if((getpixel(x,y)!=border)&&(getpixel(x,y)!=fill))
	{
		delay(8);
		putpixel(x,y,fill);

		bfill(x+1, y,fill,border);
        	bfill(x, y+1,fill,border);
        	bfill(x-1, y,fill,border);
        	bfill(x, y-1,fill,border);        	
	}
}
int main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"C:\\Tc\\BGI");
	rectangle(10,50,50,10);
	bfill(11,12,MAGENTA,WHITE);
	getch();
	closegraph();
}
