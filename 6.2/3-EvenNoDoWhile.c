//3 Write a Program to print even numbers from 1 to N using a do-while loop.
#include<stdio.h>

main()
{
	int a,b=1;
	printf("Enter a end number: ");
	scanf("%d",&a);
	
	do
	{
		if(b%2==0)
		{
			printf("%d\t",b);
		}
		b++;
	}while(b<=a);
}
