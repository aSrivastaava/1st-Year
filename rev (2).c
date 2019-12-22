#include<stdio.h>
void main()
{
	int num,rev=0;
	printf("Enter the number to get it's reverse:\t");
	scanf("%d",&num);
	while(num>0)
	{	
		rev=rev*10;
		rev=rev+num%10;
		num=num/10;
	}
	printf("The reverse number is %2d\n",rev);
}
