//3 Write a Program to find the sum of a first and the last digit of a number.
#include<stdio.h>

main()
{
	int n,fd,ld;
	printf("Enter a digit: ");
	scanf("%d",&n);
	
	ld=n%10;
	
	while(n>9)
	{
		n=n/10;	
	}
	fd=n;
	printf("Sum of First & Last Digit: %d",fd+ld);
}
