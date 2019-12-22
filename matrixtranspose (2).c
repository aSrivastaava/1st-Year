#include<stdio.h>
void main()
{
	int i,j,k,m;
	printf("Enter the number of Rows of the Matrix:\t");
	scanf("%d",&i);
	printf("Enter the number of columns of the Matrix:\t");
	scanf("%d",&j);
	int A[i][j];
	printf("Enter the elements of the Matrix\n");
	for(i=0;i<=i;k++)
	{
		for(m=0;m<=j;m++)
		{
			scanf("%d",&A[k][m]);
		}
	}
	printf("The Matrix is:\n");
	for(i=0;i<=3;i++)
		{
			for(j=0;j<=2;j++)
			{
				printf("\t%d",A[i][j]);
		}
				printf("\n ");
			}
	
}
