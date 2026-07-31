//WAP which calculates avg

#include<stdio.h>
#include<conio.h>

void main()
{
	int x,y,z,avg;

	clrscr();

	printf("\n enter the value of x,y,z,: ");
	scanf("%d%d%d",&x,&y,&z);

	avg = (x+y+z)/3;
	printf("\n The Ans Is : %d",avg);

	getch();
}