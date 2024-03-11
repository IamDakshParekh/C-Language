//1 Write a Program to find the minimum number from the given 3 numbers using the ternary operator.

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
	
	a<b
		? a<c
			? printf("A is Minimum Number")
			: printf("B is Minimum Number")
		: b<c
			? printf("B is Minimum Number")
			: printf("C is Minimum Number");
}
