/* 9. Write a program to input two values from user and
check whether the first number is divisible by second or not */

#include <stdio.h>
#include <conio.h>

void main()
{
    int a, b;
    clrscr();

    printf("\n Enter first number: ");
    scanf("%d", &a);

    printf("\n Enter second number: ");
    scanf("%d", &b);


    if ( b == 0)
    {
	printf("\n %d is not possible oparation");
    }
    else{
	if (a % b == 0)
	{
		printf("\n %d is divisible by %d", a, b);
	}
	else
	{
		printf("\n %d is not divisible by %d", a, b);
	}
    }
    getch();
}