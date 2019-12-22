#include<stdio.h>
void main()
{
 int i, sum = 0, count=0;
 float avg;

 for (i =0;i<=100;i++)
 {
  if(i%4==0)
  {
   printf("\n%d",i);
   sum=sum+i;
count++;
  }
 }
 avg=sum/count;
 printf("\n Sum = %d\n",sum);
 printf("Average Value =  %.2f\n",avg);
}
