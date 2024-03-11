//1 Write a Program to find the minimum number from the given 2 numbers using if else.

#include<stdio.h>

main()
{
	int a,b;
	printf("Enter the First Number: ");
	scanf("%d",&a);
	printf("Enter the Second Number: ");
	scanf("%d",&b);
	
	if(a<b)
	{
		printf("%d is minimum number",a);
	}
	else
	{
		printf("%d is minimum number",b);
	}
}
