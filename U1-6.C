
//WA{P which display sum of two numbers
#include<stdio.h>
#include<conio.h>

void main()
{
	int x,y,z;
	clrscr();

	printf("\n Enter two nombers ; " );
	sacnf("%d%d",&x,&y);

       /*printf("\n Enter value of x : ");
	scanf("%d",&x);

	printf("\n Enter value of y : ");
	scanf ("%d",&y);*/

	printf("\n Before interchange : x=%d y=%d",x,y );

	z = x;
	x = y;
	y = z;

	printf("\n Before interchange : x=%d y=%d",x,y );
	getch();


}