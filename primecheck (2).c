#include<stdio.h>
void main()
{
	int p, d, flag, rev=0, rem;
	printf("Enter a 3 digit number to check it is prime and twisted prime or not:\n");
	scanf("%d",&p);
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
