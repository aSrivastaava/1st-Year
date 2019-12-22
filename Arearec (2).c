#include<stdio.h>
 void main()
{
	float area, l, b;
	printf("Enter the length of the Rectangle:");
	scanf("%f",&l);
	printf("Enter the breadth of the Rectangle:");
	scanf("%f",&b);
	area=l*b;
	printf("The area of the rectangle(%.2f,%.2f)=%.2f\n",l,b,area);
}
