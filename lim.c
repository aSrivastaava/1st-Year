#include<stdio.h>
void main()
{
	int i,n, a[20],max,min;
	printf("Enter the limit of array:\t");
	scanf("%d",&n);
	printf("Enter the number:\t");
	for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
	max=a[0];
	min=a[0];
	for(i=0;i<n;i++)
		{
			if(max<=a[i])
			{
				max=a[i];
			}
		}	
	printf("Maximum Value is:\t%d\n",max);
	for(i=0;i<n;i++)
		{
			if(min>a[i])
			{
				min=a[i];			
			}
	
		}
	printf("min value is: \t %d\n",min);
}			
	
