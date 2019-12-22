#include<stdio.h>
void main()
{
	int p,r=50,t=8;
	float simpleinterest;
	printf("Enter the principal amount:\n");
	scanf("%d",&p);
	simpleinterest=(p*r*t)/100;
	printf("The simple Interest of amount: %d =  %.2f\n",p,simpleinterest);	
}
