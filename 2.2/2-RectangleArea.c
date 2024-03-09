//2 Write a Program to find the area of a rectangle.
#include<stdio.h>

main()
{
	float l,w,area;
	printf("Enter the length = ");
	scanf("%f",&l);
	printf("Enter the width = ");
	scanf("%f",&w);
	
	area=l*w;
	printf("Area of Rectangle = %.2f",area);
}
