#include "header.h"
void main()
{
	float HRA,DA,grosssalary,basicsalary;
	p("Enter the Basic Salary\t");
	s("%f"&basicsalary);
	DA= basicsalary*1.05;
	p("The DA offered = 105%%(Rs.%1.2f)\n",DA);
	HRA= basicsalary*0.2;
	p("The HRA offered = 20%%(Rs.%1.2f)\n",HRA);
	grosssalary=basicsalary+HRA+DA;
	p("The Gross salary=Rs.%1.2f\n",grosssalary);
}
