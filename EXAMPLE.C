#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
int gd=DETECT,gm;
int i,j=1;
clrscr();
initgraph(&gd,&gm,"C:/TC/BGI");
setbkcolor(13);
//setcolor(8);
//for(i=0;i<=getmaxx();i++)
for(i=0;i<200;i++)
//for(i=0;!kbhit();i++)
{
//cleardevice();
if(j!=0 &&j<15)
{
j=i%15;
setcolor(j);
}
else{
j=i%15;
setcolor(13);
}
circle(getmaxx()/2,getmaxy()/2,i);
delay(50);
}
getch();
closegraph();
}