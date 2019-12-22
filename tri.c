#include <stdio.h>
void main()
{
	float a,b,c;
	printf("Enter the sides of the triangle\n");
	scanf("%f%f%f",&a,&b,&c);
	if(a==b && b==c && c==a)
	printf("The Triangle is Equilateral\n");
	else if(a==b || b==c || a==c)
	printf("The Triangle is Isosceles\n");
	else if(a*a==(b*b)+(c*c) || b*b==(b*a)+(c*c) || c*c==(b*b)+(a*a))
	printf("The Triangle is Right Angle Triangle\n");
	else
	printf("The Triangle is scalar\n");
}
