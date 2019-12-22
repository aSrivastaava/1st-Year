#include<stdio.h>
int main()
{
int i,n,large,small,a[4];
printf("enter number");
scanf("%d",&n);
for(i=0;i<n;i++)
{
if(a[i]<n)
	{i++;
	printf("number is larger");}
else
	printf("%d is not larger",n);
}
}
