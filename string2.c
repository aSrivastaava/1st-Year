#include"header.h"
void main()
{
	char fName[20],lName[20];
	p("Enter your first name:\t");
	s("%s",fName);
	p("Enter your last name:\t");
	s("%s",lName);
	p("Welcome to MIT ADT %s %s\n",fName,lName);		
}
