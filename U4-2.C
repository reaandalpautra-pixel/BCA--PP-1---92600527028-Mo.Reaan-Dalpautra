// 2. Write a program that Print 2 4 6 ..... 20

#include <stdio.h>
#include <conio.h>

void main() {
    int i,j=1;
    clrscr();
    printf("\n Usinf for loop \n");

    for (i = 1; i <= 20; i++)
    {
	if(i%2==0){
	    printf("%d ", i);
	}
    }
    printf("\n Usinf while loop \n");
    while(j<=20)
    {
	if(j%2==0)
	{
	    printf("%d ", j);
	}
    j++;
    }

    getch();
}