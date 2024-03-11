//4 Write a Program to find Prime numbers between 1 to N.
#include<stdio.h>

main()
{
	int n,i,j,count;
	printf("Enter the Ending Number: ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		count=0;
		for(j=1;j<=n;j++)
		{
			if(i%j==0)
			{
				count++;
			}
		}
		if(count==2)
		{
			printf("%d ",i);
		}
	}
}
