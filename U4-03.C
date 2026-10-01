//WAP that print 1 to 10 using loop

#include<stdio.h>
#include<conio.h>

void main()

{
	int i,N;
	clrscr();

	printf("\n Enter the value of N : ");
	scanf("%d",&N);

	for(i=1;i<=N;i++)
	{
		printf(" %d",i);
	}
	printf("\n");
	printf("\n");
	for(i=1;i<=N;i++)
	{
		printf(" %d",i*i);
	}
	printf("\n");
	printf("\n");
	for(i=1;i<=N;i++)
	{
		printf(" %d",i*i*i);
	}
	getch();

}
