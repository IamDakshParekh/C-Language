//1 Write a Program to find the minimum number from the given 3 numbers using nested if else.

#include<stdio.h>

main()
{
	int a,b,c;
	printf("Enter the First Number: ");
	scanf("%d",&a);
	printf("Enter the Second Number: ");
	scanf("%d",&b);
	printf("Enter the Third Number: ");
	scanf("%d",&c);
	
	if(a<b)
	{
		if(a<c)
		{
			printf("A is small");
		}
		else
		{
			printf("C is small");
		}
	}
	else
	{
		if(b<c)
		{
			printf("B is small");
		}
		else
		{
			printf("C is small");
		}
	}
}
