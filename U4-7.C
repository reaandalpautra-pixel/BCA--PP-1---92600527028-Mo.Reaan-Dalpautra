/* 7. Write a program to print multiplication table of inputted number.*/

#include <stdio.h>
#include <conio.h>

void main() {
    int i,n,j=1;
    clrscr();
    printf("Enter Number: ");
    scanf("%d",&n);

    printf("\n \n ********Using For Loop******** \n ");
    for (i = 1; i <= 10; i++)
    {
	printf("%d * %d = %d \n",n,i,n*i);
    }
    printf("\n \n ********* Using While  Loop******** \n ");
    while (j<=10)
    {
		printf("%d * %d = %d \n",n,j,n*j);
		j++;
    }
    getch();
}