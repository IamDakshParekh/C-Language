//3 Write a Program to print 1 to N using a while loop.
#include<stdio.h>

main()
{
	int a=1;
	int n;
	
	printf("Enter a end number: ");
	scanf("%d",&n);
	
	while(a<=n)
	{
		printf("%d\n",a);
		a++;
	}
}
