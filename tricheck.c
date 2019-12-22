#include <stdio.h>
void main()
{
	float a,b,c;
	printf("Enter the sides of the triangle\n");
	scanf("%f%f%f",&a,&b,&c);
	if(a==b && b==c)
	printf("The Triangle is Equilateral\n");
	else if(a==b && b!=c)
	printf("The Triangle is Isosceles\n");
	else if(b==c && b!=a)
	printf("The Triangle is Isosceles\n");
	else if(a==c && a!=b)
	printf("The Triangle is Isosceles\n");
	else if(a*a==(b*b)+(c*c))
	printf("The Triangle is Right Angle Triangle\n");
	else if(b*b==(b*a)+(c*c))
	printf("The Triangle is Right Angle Triangle\n");
	else if(c*c==(b*b)+(a*a))
	printf("The Triangle is Right Angle Triangle\n");
	else
	printf("The Triangle is scalar\n");
}
