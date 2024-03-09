//3 Write a Program to find the area of a triangle.

#include<stdio.h>

main()
{
	float b,h,area;
	printf("Enter the base of triangle : ");
	scanf("%f",&b);
	printf("Enter the heigth of triangle : ");
	scanf("%f",&h);
	
	area = (b*h)/2;
	printf("Area of Triangle : %.2f",area);
}
