//1 Write a Program to check whether a number is even or odd using the ternary operator.

#include<stdio.h>

main()
{
	int a;
	printf("Enter a Number: ");\
	scanf("%d",&a);
	
	a%2 == 0
		? printf("The Number is Even...")
		: printf("The Number is Odd...");
			
}
