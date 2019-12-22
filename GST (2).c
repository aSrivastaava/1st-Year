#include "header.h"
void main()
{
  float Dis,GST,MRP,Price;
  p("Enter the MRP of Laptop\tRS. ");
  s("%f",&MRP);
  Dis=MRP*.1;
  Price=MRP-Dis;
  GST=Price*.18;
  Price=Price+GST;
  p("The total Price of laptop=Rs.%1.2f\n(including: GST and Discount of 10percent)\n",Price);
 }
