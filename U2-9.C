//write a program intarchange value without 3rd ariable
//Dalpautra Mo.Reaan
#include<stdio.h>
#include<conio.h>

void main()
{
	int r,s;
	clrscr();

	printf("\n Enetr the value of r : ");
	scanf("%d",&r);

	printf("\n Enetr the value of s : ");
	scanf("%d",&s);

	s=s+r;
	r=s-r;
	s=s-r;

	printf("\n Interchange of R : %d",r);
	printf("\n Interchange of S : %d",s);
	getch();

}
