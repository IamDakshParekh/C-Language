/*3 Write a Program to print the below pattern using nested for loop.
        5
      4 4
    3 3 3
  2 2 2 2
1 1 1 1 1
*/
#include<stdio.h>

main()
{
	int i,j,s;
	for(i=5;i>=1;i--)
	{
		for(s=i-1;s>=1;s--)
		{
			printf("  ");
		}
		for(j=5;j>=i;j--)
		{
			printf("%d ",i);
		}
		printf("\n");
	}
}
