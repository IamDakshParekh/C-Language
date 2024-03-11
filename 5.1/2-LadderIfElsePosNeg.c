//2 Write a Program to find if a given number is neutral or not using a ladder if else.

#include<stdio.h>

main()
{
	int a;
	printf("Enter a Number: ");
	scanf("%d",&a);
	
	if(a<0)
	{
		printf("The Number is Negative");
	}
	else if(a==0)
	{
		printf("The Number is Neutral");
	}
	else
	{
		printf("The Number is Positive");
	}
}
