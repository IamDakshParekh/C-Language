//1. Write a Program to find the area of a circle.
#include<stdio.h>
#define PI 3.14
main()
{
	float r,area;
	printf("Value of Pi: %.2f\n",PI);
	printf("Value of r: ");
	scanf("%f",&r);
	
	area=PI*r*r;
	printf("Area of Circle = %.2f",area);
}
