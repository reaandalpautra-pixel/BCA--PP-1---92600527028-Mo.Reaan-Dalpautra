//WAP that input 2 value from user and find out Minimum
#include<stdio.h>
#include<conio.h>

void main()

{
	int x,y;

	clrscr();

	printf("\n Enter the value of x : ");
	scanf("%d",&x);

	printf("\n Enter the value of y : ");
	scanf("%d",&y);

	if(x == y)
	{
		printf("\n Both Are Same");
	}
	else
	{
		printf("\n Both Are not same");
		if(x<y)
		{
			printf("\n value of x is Minimum");
		}
		else
		{
			printf("\n value of y is Minimum");
		}
	}

	getch();
}
