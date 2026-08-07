//WAP that find out person is Eligible or Not Eligible
#include<stdio.h>
#include<conio.h>

void main()

{
	int x;

	clrscr();

	printf("\n Enter Your Age : ");
	scanf("%d",&x);

	if(x>=18)
	{
		printf("\n You Are Eligible For Vote");
	}
	else
	{
		printf("\n You Are Not Eligible For Vote");
	}

	getch();
}
