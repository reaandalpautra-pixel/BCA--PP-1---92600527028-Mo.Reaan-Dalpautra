// 9. Print first 10 natural number with its square and cube.

#include <stdio.h>
#include <conio.h>

void main() {
    int i,j=1;
    clrscr();
    printf("\n **** Using For Loop ***** \n");
    for (i = 1; i <= 10; i++)
    {
	printf("%d, Square:%d, Cube:%d \n", i,i*i,i*i*i);
    }

    printf("\n **** Using While Loop ***** \n");
    while (j<=10)
    {
	printf("%d, Square: %d, Cube: %d \n", j,j*j,j*j*j);
	j++;
    }
    getch();
}