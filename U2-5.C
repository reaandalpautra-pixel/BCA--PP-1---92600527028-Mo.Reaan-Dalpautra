//WAP which calculates area of reactangle

#include<stdio.h>
#include<conio.h>

void main()
{
	int L,B,A;

	clrscr();

	printf("\n enter the value of L,B: ");
	scanf("%d%d",&L,&B);

	A=L*B;
	printf("\n The Ans Is : %d",A);

	getch();
}