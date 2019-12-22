#include<stdio.h>
 void main()
{
	int sum, avg, a, b, c; 
	printf("Enter first number:");
	scanf("%d",&a);
	printf("Enter second number:");
	scanf("%d",&b);
	printf("Enter third number:");
	scanf("%d",&c);
	sum=a+b+c;
	avg=(a+b+c)/3;
	printf("The sum of the numbers=%d\nThe avg of the given numbers=%d\n",sum,avg);
}
