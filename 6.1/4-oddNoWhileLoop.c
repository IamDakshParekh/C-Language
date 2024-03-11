//4 Write a Program to print odd numbers from N to 1 using a while
#include<stdio.h>

main()
{
	int a=1;
	int n;
	
	printf("Enter a end number: ");
	scanf("%d",&n);
	
	while(n>=a)
	{
		if(n%2!=0)
		{
			printf("%d\n",n);			
		}
		n--;
	}
}
