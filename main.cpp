#include<stdio.h> 
#include<process.h> 
#include<conio.h>
#include<graphics.h> 
#include<math.h>
void disp(int n,float c[][3])
{
float maxx,maxy; 
int i; 
maxx=getmaxx(); 
maxy=getmaxy(); 
maxx=maxx/2; 
maxy=maxy/2; 
i=0;
while(i<n-1)
{
line(maxx+c[i][0],maxy-c[i][1],maxx+c[i+1][0],maxy-c[i+1][1]); 
i++;
}
i=n-1;
line(maxx+c[i][0],maxy-c[i][1],maxx+c[0][0],maxy-c[0][1]); 
setcolor(GREEN);
line(0,maxy,maxx*2,maxy); 
line(maxx,0,maxx,maxy*2); 
setcolor(WHITE);
}
void mul(int n,float b[][3],float c[][3],float a[][3])
{
int i,j,k; 
for(i=0;i<n;i++) 
for(j=0;j<3;j++) 
a[i][j]=0; 
for(i=0;i<n;i++) 
for(j=0;j<3;j++) 
for(k=0;k<3;k++)
{
a[i][j] = a[i][j] + (c[i][k] * b[k][j]);
}
}
void reflection(int n,float c[][3])
{
float b[10][3],a[10][3];
int i=0,ch,j; 
cleardevice();
printf("\n\t* * MENU * *"); 
printf("\n\t1) ABOUT X-AXIS"); 
printf("\n\t2) ABOUT Y-AXIS"); 
printf("\n\t3) ABOUT ORIGIN"); 
printf("\n\t4) ABOUT Y=X"); 
printf("\n\t5) ABOUT Y=-X"); 
printf("\n\t6) EXIT”"); 
printf("\n\tENTER YOUR CHOICE :"); 
scanf("%d",&ch);
cleardevice(); 
disp(n,c); 
for(i=0;i<3;i++) 
for(j=0;j<3;j++)
{ 
b[i][j]=0; 
if(i==j) 
b[i][j]=1;
}
switch(ch)
{
case 1:
b[1][1]=-1;
break; 
case 2:
b[0][0]=-1;
break; 
case 3:
b[0][0]=-1;
b[1][1]=-1;
break; 
case 4:
b[0][0]=0;
b[1][1]=0;
b[0][1]=1;
b[1][0]=1;
break; 
case 5:
b[0][0]=0;
b[1][1]=0;
b[0][1]=-1;
b[1][0]=-1;
break; 
case 6:
break; 
default:
printf("“\n\tINVALID CHOICE ! "); 
break;
}
mul(n,b,c,a); 
setcolor(RED); 
disp(n,a);
}
int main()
{
int i,j,k,cho,n,gd=DETECT,gm; 
float c[10][3],tx,ty,sx,sy,ra;
initgraph(&gd,&gm,"c:\\turboc3\\bgi"); 
printf("\nEnter the number of vertices : "); 
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("\nEnter the co-ordinates of the %d vertex :",i+1); 
scanf("%f%f",&c[i][0],&c[i][1]);
c[i][2]=1;
}
disp(n,c); 
reflection(n,c); 
getch(); 
closegraph();
}
