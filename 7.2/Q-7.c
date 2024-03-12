/*7 Write a Program to print the below pattern using nested for loop.
        1
      1 2 1
    1 2 3 2 1
  1 2 3 4 3 2 1
1 2 3 4 5 4 3 2 1
*/
#include<stdio.h>

main()
{
	int i,s,j;
	for(i=1;i<=5;i++)
	{
		for(s=1;s<=5-i;s++)
		{
			printf("  ");
		}
		for(j=1;j<=i;j++)
		{
			printf("%d ",j);
		}
		for(j=i-1;j>=1;j--)
		{
			printf("%d ",j);
		}
		printf("\n");
	}
}
