#include <stdio.h>
void main()
{
	int i, n, n1, n2;
	int A[50],B[50],C[50];
	printf("Enter the number of element\n");
	scanf("%d",&n); 
	printf("Enter the elements\n");
	for(i=0; i<n; i++)
	scanf("%d",&A[i]);
	n1=0; 	n2=0;
	for(i=0;i<n;i++)
	{
		if(A[i]%2==1)
		{	B[n1++]=A[i];
			//n1++;
		}else{
			C[n2++]=A[i];
			//n2++;
		}	
	}
	printf("Odd elements are as shown: \n ");
	for(i=0; i<n1;i++)
		printf("%d\t",B[i]);
		printf("\nEven elements are as shown: \n");
	for(i=0; i<n2; i++)
		printf("%d\t",C[i]);
	printf("\n");
}	
