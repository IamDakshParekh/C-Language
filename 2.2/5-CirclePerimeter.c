//5 Write a Program to find the Perimeter of the circle.
#include<stdio.h>
#define PI 3.14
main()
{
	float r,p;
	printf("The Value of PI: %.2f\n",PI);
	printf("Enter the Radius of Circle: ");
	scanf("%f",&r);
	
	p = 2*PI*r;
	printf("Perimeter of the Circle: %.2f",p);
}
