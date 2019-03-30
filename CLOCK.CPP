#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<math.h>
void main()
{
int gd=DETECT,gm,i;
float x,b1,b2;
initgraph(&gd,&gm,"C://TC//BGI");
for(i=0;!kbhit();i++)
{
cleardevice();
x=((i*3.14)/180);
b1=250+120*cos(x);
b2=250+120*sin(x);
line(250,250,b1,b2);
circle(250,250,150);
setbkcolor(6);
outtextxy(380,250,"3");
setcolor(3);
outtextxy(120,250,"9");
outtextxy(250,120,"12");
outtextxy(250,380,"6");
delay(100);
}
getch();
closegraph();
}