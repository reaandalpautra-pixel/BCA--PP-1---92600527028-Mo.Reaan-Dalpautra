// WAP diplay code of input charcter
#include<stdio.h>
#include<conio.h>

void main()
{
	char x;
	clrscr();
	printf("\n Enter aby character : ");
	scanf("%c",&x);

	printf("\n Input charcter is : %c",x+32);
	printf("\n ASCII Code is :%d",x+32);

	getch();
}