//2 Write C Program to find gross salary by adding % of HRA, DA, and TA of user choice.

#include<stdio.h>

main()
{
	float sal,hra,da,ta,gross;
	printf("Enter a Base Salary: ");
	scanf("%f",&sal);
	printf("Enter the HRA: ");
	scanf("%f",&hra);
	printf("Enter the DA: ");
	scanf("%f",&da);
	printf("Enter the TA: ");
	scanf("%f",&ta);
	
	gross = sal +(sal*hra/100) + (sal*da/100) + (sal*ta/100);
	printf("Gross Salary : %.2f ",gross);
}
