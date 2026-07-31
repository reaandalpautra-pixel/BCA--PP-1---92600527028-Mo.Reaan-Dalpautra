// WAP to display simple interest

#include<stdio.h>
#include<conio.h>

void main()
{
	float pa,r,y,si;
	clrscr();

	printf("\n enter the value of pa : ");
	scanf("%f",&pa);

	printf("\n enter the value of r : ");
	scanf("%f",&r);

	printf("\n enter the value of y : ");
	scanf("%f",&y);

	si=pa*r*y/100;
	printf("\n *******************************");
	printf("\n * principal Amount *:%.2f     *",pa);
	printf("\n * Rate of INterest *:%.2f     *",r);
	printf("\n * Numbers of year  *:%.2f     *",y);
	printf("\n *******************************");
	printf("\n simple insterst is %.2f",si);

	getch();
}






