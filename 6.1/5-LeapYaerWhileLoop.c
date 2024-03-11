//5 Write a Program to print leap years between two given numbers using a while loop.
#include<stdio.h>

main()
{
	int s,e;
	printf("Enter a starting number: ");
	scanf("%d",&s);
	printf("Enter a ending number: ");
	scanf("%d",&e);
	
	while(s<=e)
	{
		if(s%4==0)
		{
			printf("Leap year: %d\n",s);
		}
		s++;
	}
}
