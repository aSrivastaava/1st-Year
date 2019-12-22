#include<stdio.h>
void main()
{
 int i, sum = 0,flag=0 ;
 float avg;
 for ( i =0 ; i <= 100 ; i++)
 {
  if(i%4 == 0)
  {
   printf("\n %d",i);
   sum+=i;
  }
  flag+=1;
 }
 avg=sum/flag;
 printf("\nThe Sum = %d",sum);
 printf("\nThe Average= %2.2f",avg);
}
