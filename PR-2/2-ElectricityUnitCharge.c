/*2 Write a Program to input electricity unit charges and calculate the total electricity bill according to the given condition:
For the first 50 units Rs. 0.50/unit
For the next 100 units Rs. 0.75/unit
For the next 100 units Rs. 1.20/unit
For units above 250 Rs. 1.50/unit
An additional surcharge of 20% is added to the bill.
*/
#include<stdio.h>

main()
{
	float unit,bill;
	printf("Enter electricity unit: ");
	scanf("%f",&unit);
	
	if(unit<=50)
	{
		bill=unit*0.50;	
	}
	else if(unit >= 51 && unit <= 150)
	{
		bill=((unit-50)*0.75)+25;
	}
	else if(unit >= 151 && unit <= 250)
	{
		bill=((unit-150)*1.20)+100;
	}
	else if(unit >= 251)
	{
		bill=((unit-250)*1.50)+220;
	}
	
	bill=bill+(bill*0.20);
	printf("Electricity bill: %f",bill);
}
