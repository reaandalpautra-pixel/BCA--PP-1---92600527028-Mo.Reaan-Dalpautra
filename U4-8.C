// 8. Write a program to print 0 1 1 2 3 5 8 13....n

#include<stdio.h>
#include<conio.h>

void main(){
    int n, a = 0, b = 1, c=1;
    clrscr();
    printf("Enter number of terms: ");
    scanf("%d", &n);
    printf("%d %d ",a,b);
    while (a+b <= n)
    {
	c = a + b;
	a = b;
	b = c;
	printf("%d ", c);
    }
    getch();
}