#include<stdio.h>
void main()
{
	int i,j,k,m;
	printf("Enter the number of Rows of the Matrix:\t");
	scanf("%d",&i);
	printf("Enter the number of columns of the Matrix:\t");
	scanf("%d",&j);
	int A[i][j];
	printf("Enter the elements of the Matrix");
	printf("The matrix is:\n");
	for(k=0;k<i;k++)
	{
		for(m=0;m<j;m++)
		{
			scanf("%d",&A[k][m]);
		}
	}
	for(i=0;i<3;i++)
		{
			for(j=0;j<2;j++)
			{
				printf("\t%d",A[i][j]);
		}
				printf("\n ");
			}
}
