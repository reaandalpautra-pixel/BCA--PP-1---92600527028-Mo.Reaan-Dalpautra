// WAP that Input Qun,price,Dis, ANd display amount
#include<stdio.h>
#include<conio.h>

void main()
{
	int q,p,D,T,FA,DRS;

	clrscr();

	printf("\n ********************");

	printf("\n Quantity : ",q);
	scanf("%d",&q);
	printf("\n ---------------------");
	printf("\n Price : ",p);
	scanf("%d",&p);
	printf("\n ---------------------");
	printf("\n Enter the value of D : ",D);
	scanf("%d",&D);
	printf("\n ********************");
	T=q*p;
	printf("\n Total : %d RS",T);
	DRS=T*D/100;
	printf("\n Discount(Rs) : %d %",DRS);
	FA=T-DRS;
	printf("\n ********************");
	printf("\n Final Amount is : %d",FA);
	printf("\n ********************");
	getch();

}