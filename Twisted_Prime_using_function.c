#include<stdio.h>
void twist(int);
void prime(int);
int p, d, flag, rev, rem;
void main()
{
	printf("Enter a 3 digit number to check it is prime and twisted prime or not:\n");
	scanf("%d",&p);
	prime(p);
	twist(p);

}
void prime(int p)
{
     flag=1;
	for(d=2;d<=p-1;d++)
	if(p%d==0)
	{
		flag=0;
		break;
	}
	if(flag==0 || p==1 ||p==0)
	printf("%d is not Prime\n",p);
	else
	printf("%d is Prime\n",p);

}
void twist(int p)
{
        rev = 0;
    	while(p>0)
	{
		rem=p%10;
		rev=rev*10+rem;
		p=p/10;
	}
	printf("The reverse number is %d\n",rev);
	for(d=2;d<=rev-1;d++)
	if(rev%d==0)
	{
		flag=0;
		break;
	}
	if(flag==0 || rev==1 ||rev==0)
	printf("%d is not Prime\n",rev);
	else
	printf("%d is Prime\n",rev);

}
