#include<stdio.h>
#include<math.h>
int main()
{
    	float p,q,r,SI,CI;
    	int n;
   	printf("Enter the value of Principal p = ");
    	scanf("%f",&p);
    	printf("\n");
    	printf("Enter the value of Rate r = ");
    	scanf("%f",&r);
    	printf("\n");
    	printf("Enter the value of Period in year n = ");
    	scanf("%d",&n);
    	printf("\n");
   	SI = ((p*r*n)/100);
	printf("Simple Interest SI= %.3f \n",SI);
	q = 1+(r/100);
	CI=p*pow(q,n)-p;
   	printf("Compound Interest CI= %.3f \n",CI);
	return 0;
}
