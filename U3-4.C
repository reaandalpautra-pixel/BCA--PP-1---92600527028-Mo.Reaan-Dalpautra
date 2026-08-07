// WAP that input vlaue from user odd or even
#include<stdio.h>
#include<conio.h>

void main()
{
	int x,y;
	clrscr();

	printf("\n Enter the value of x :");
	scanf("%d",&x);

	y = x % 2;

	if(y==0)
	{
		printf("\n Even Number ");
	}
	else
	{
		printf("\n Odd Number");
	}

	getch();
}
