#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
	int a,b,c,com;
	char s1[40],s2[40],con[80];
	printf("Press 1 for Concatenate\nPress 2 for Length\nPress 3 to copy\nPress 4 to Compare\nPress 5 to Exit\n");
	printf("Enter your choice:\t");
	scanf("%d",&c);
	while(c!=0)
	{
		switch (c)
		{	
			case 1: 
				printf("Enter the first String to Concatenate:\t");
				scanf("%s",s1);
				
				printf("Enter the second String to Concatenate:\t");
				scanf("%s",s2);
				strcat(s1,s2);
				printf("The concatenate is %s\n",s1);
			break;
			case 2:
				printf("Enter the first String to Calculate its length:\t");
				scanf("%s",s1);
				
				printf("Enter the second String to calculate its length:\t");
				scanf("%s",s2);
				a=strlen(s1);
				b=strlen(s2);
				printf("The length of the string %s = %d\n The length of the string %s = %d\n",s1,a,s2,b);
		       break;
 			case 3:
				printf("Enter the first String to Compare:\t");
				scanf("%s\n",s1);
				
				printf("Enter the second String to Compare\t");
				scanf("%s\n",s2);
				com=strcmp(s1,s2);
					if(com==0)
				{
					printf("The Strings are equal\n");			
				}
					else
				{
					printf("The Strings are unequal\n");
				}
		
			break;
			case 4:
				printf("Enter the first String to copy to Second string\n ");
				scanf("%s",s1);
				strcpy(s1,s2);
				printf("The copyed string is %s\n",s1);
			break;
			case 5: 
				exit(0);
		}
	}	
}
