//4 Write a Program to print the fibonacci series up to N numbers using for loop.
#include<stdio.h>

main()
{
	long long int a;
	printf("Enter a number: ");
	scanf("%d",&a);
	
	int n1=0,n2=1,c,n;
	printf("Fibonacci Series: 0\t1\t");
	for(n=3;n<=a;n++)
	{
		printf("%d\t",c);
		n1=n2;
		n2=c;
		c=n1+n2;
		
	}
}
