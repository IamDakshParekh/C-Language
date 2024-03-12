/*4 Write a Program to print the below pattern using nested for loop.
1 0 1 0 1
  0 1 0 1
    1 0 1
      0 1
        1
*/
#include<stdio.h>

main()
{
	int i,s,j;
	for(i=1;i<=5;i++)
	{
		for(s=1;s<=i-1;s++)
		{
			printf("  ");
		}
		for(j=5;j>=i;j--)
		{
			printf("%d ",j%2);
		}
		printf("\n");
	}
}
