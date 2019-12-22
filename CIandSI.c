#include <stdio.h>
//#include <conio.h>
#include <math.h>
void main()
{
	int i, n;
	float p,r,a,interest;
	
//clrscr();
	printf("Enter the principal amount, rate of interest and number of years:\n");
	scanf("%f%f%d",&p,&r,&n);
	a=p*pow((1+r/100),n);
	printf("Total Amount is %.2f",a);
	printf("\n");
	for(i=1;i<=n;i++)
	{
		interest=(p*r)/100;
		p=p+interest;
		printf("\nInterest earned after %d years is %.2f. ",i,interest);
		printf("\nAmount after %d years is %.2f.\n",i, p);
	}
//	getch();
}
