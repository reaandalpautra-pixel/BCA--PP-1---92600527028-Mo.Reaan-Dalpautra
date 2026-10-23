// Demo of do while loop

#include<stdio.h>
#include<conio.h>


void main()
{
	int x,y,z;
	char ch;
	clrscr();

	do
	{
		printf("\n Enter value of x: ");
		scanf("%d",&x);

		printf("\n Enter value of y: ");
		scanf("%d",&y);

		z = x + y;
		printf("\n Sum, is = %d",z);

		printf("\n do you want to continue (Y/N): ");

		ch = getche();
	}while (ch == 'Y'  ||  ch  == 'y' );

	getch();
}