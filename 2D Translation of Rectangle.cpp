#include<stdio.h> 
#include<conio.h> 
#include<graphics.h> 
#include<process.h> 
#include<math.h>
int x1,y1,x2,y2,x3,y3,mx,my;
void draw(); 
void tri(); 
int main()
{
int gd=DETECT,gm; int c; 
initgraph(&gd,&gm,"c:\\turboc3\\bgi "); 
printf("Enter the 1st point for the triangle:"); 
scanf("%d%d",&x1,&y1);
printf("Enter the 2nd point for the triangle:"); 
scanf("%d%d",&x2,&y2);
printf("Enter the 3rd point for the triangle:"); 
scanf("%d%d",&x3,&y3);
cleardevice(); draw(); 
getch();
tri();
getch();
}
void draw()
{
line(x1,y1,x2,y2);
line(x2,y2,x3,y3);
line(x3,y3,x1,y1);
}
void tri()
{
int x,y,a1,a2,a3,b1,b2,b3;
printf("Enter the Transaction coordinates"); 
scanf("%d%d",&x,&y);
cleardevice(); 
a1=x1+x; 
b1=y1+y; 
a2=x2+x; 
b2=y2+y;
a3=x3+x; 
b3=y3+y; 
line(a1,b1,a2,b2);
line(a2,b2,a3,b3);
line(a3,b3,a1,b1);
}
