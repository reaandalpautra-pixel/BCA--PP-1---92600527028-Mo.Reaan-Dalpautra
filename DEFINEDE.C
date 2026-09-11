//DEFINE DEMO Varible
#include<stdio.h>
#include<conio.h>

#define PI 3.14
#define pf printf

void main()
{
	float r=2.5 , a;
	clrscr();
	a = PI * r * r;
	pf("\n Area is : %f",a);
	getch();
}