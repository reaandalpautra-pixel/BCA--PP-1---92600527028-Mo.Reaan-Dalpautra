// 7. Find largest out of three numbers

#include<stdio.h>
#include<conio.h>

void main()
{
	int x,y,z;
	clrscr();

	printf("\n Enter Number 1: ");
	scanf("%d",&x);

	printf("\n Enter Number 2: ");
	scanf("%d",&y);

	printf("\n Enter Number 3: ");
	scanf("%d",&z);

	if(x>y && x>z)
	{
		printf("Number 1 is largest = and this addtion is %d",x+y+z);
	}
	else
		if(y>z && y>x)
		{
			printf("Number 2 is largest = and this subtraction is %d",y-x-z);
		}
		else
		{
			printf("Number 3 is largest = and this multiplication is %d",x*y*z);
		}
	getch();

}