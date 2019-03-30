#include<stdio.h>
#include<conio.h>
void main()
{
char c;
FILE *fp=fopen(__FILE__,"r");
clrscr();
while(c!=EOF)
{
c=fgetc(fp);
putchar(c);
}
printf("%s",c);
fclose(fp);
getch();
}