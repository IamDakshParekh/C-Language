//1 Write a Program to convert temperature from degrees Celsius to Fahrenheit.
#include<stdio.h>

main()
{
	float c,f;
	printf("Enter temperature in Celsius: ");
	scanf("%f",&c);
	
	f = (c*9/5)+32;
	printf("Temperature in Fahrenheit: %.2f",f);
}
