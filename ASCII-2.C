// WAP diplay code of input charcter
#include<stdio.h>
#include<conio.h>

void main()
{
	char ch;
	clrscr();
	printf("\n Enter any character : ");
	scanf("%c",&ch);

	if (ch >= 'A' && ch <= 'Z')
	{
		printf("\n Input charcter is : %c",ch+32);
		printf("\n ASCII Code is :%d",ch+32);
	}
	else if (ch >= 'a' && ch <= 'z')
	{
		printf("\n Input charcter is : %c",ch-32);
		printf("\n ASCII Code is :%d",ch-32);
	}
	getch();
}
