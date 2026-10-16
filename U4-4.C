// 4. Write a program that Print 100 99 98... 90

#include <stdio.h>
#include <conio.h>

void main() {
    int i,j=100;
    clrscr();
    printf("\n Using for loop \n");
    for (i = 100; i >= 90; i--)
    {
	printf(" %d ", i);
    }
    printf("\n Using for loop \n");
    while(j>=90)
    {
	printf(" %d ",j);
	j--;
    }
    getch();
}