#include <stdio.h>
void main()
{
	char a[1000];
	int len,i,count=0;
    	printf("\nENTER A STRING: ");
    	gets(a);
    	len=strlen(a);
    	for(i=0;i<len;i++)
    	{
         if(a[i]=='the')
    	count += 1;
    	}
    	printf("\nThere are  %d Occurence of the in the string.\n",count);
}
