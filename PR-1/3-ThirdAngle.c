//3 Write C Program to find the third angle of a right triangle if two other angles are given.

#include<stdio.h>

main()
{
	int a,b,c;
	printf("Enter First angle of Triangle: ");
	scanf("%d",&a);
	printf("Enter Second angle of Triangle: ");
	scanf("%d",&b);
	
	c = 180-(a+b);
	printf("Third angle of Triangle: %d",c);
}
