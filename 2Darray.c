#include<stdio.h>
void main()
{
	int i,j;
	int A[3][2]={1,2,3,4,5,6};
	for(i=0;i<3;i++)
		{
			for(j=0;j<2;j++)
			{
				printf("\t%d",A[i][j]);
		}
				printf("\n ");
			}
}
