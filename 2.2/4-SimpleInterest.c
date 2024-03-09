//4 Write a Program to find Simple interest.

#include<stdio.h>

main()
{
	float p,r,n,i;
	printf("Enter the Principle Amount: ");
	scanf("%f",&p);
	printf("Enter the Rate of Interest: ");
	scanf("%f",&r);
	printf("Enter the Number of Years: ");
	scanf("%f",&n);
	
	i = (p*r*n)/100;
	printf("Simple Interest: %.2f",i);
}
