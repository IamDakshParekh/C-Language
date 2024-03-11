//2 Write a Program to find the maximum number from the given 4 numbers using nested if else.

#include<stdio.h>

main()
{
	int a,b,c,d;
	printf("Enter the First Number: ");
	scanf("%d",&a);
	printf("Enter the Second Number: ");
	scanf("%d",&b);
	printf("Enter the Third Number: ");
	scanf("%d",&c);
	printf("Enter the Fourth Number: ");
	scanf("%d",&d);
	
	if(a>b)
	{
		if(a>c)
		{
			if(a>d)
			{
				printf("A is Maximum Number");
			}
			else
			{
				printf("D is Maximum Number");
			}
		}
		else
		{
			if(c>d)
			{
				printf("C is Maximum Number");
			}
			else
			{
				printf("D is Maximmum Number");
			}
		}
	}
	else
	{
		if(b>c)
		{
			if(b>d)
			{
				printf("B is Maximum Number");
			}
			else
			{
				printf("D is Maximum Number");
			}
		}
		else
		{
			if(c>d)
			{
				printf("C is Maximum Number");
			}
			else
			{
				printf("D is Maximum Number");
			}
		}
	}
}
