#include<stdio.h>
#include<string.h>
 
int main()
{
   char str[20], ch;
   int count = 0, i;
 
   printf("\nEnter a string : ");
   gets(str);
 
   printf("\nEnter the character to be searched : ");
   scanf("%c", &ch);
 
   for (i = 0; str[i] != '\0'; i++)
	{
	      if (str[i] == ch)
	         count++;
	}
 
   if (count == 0)
      printf("\nCharacter '%c'is not present\n", ch);
   else
      printf("\nOccurence of character '%c' : %d\n", ch, count);
 
}
