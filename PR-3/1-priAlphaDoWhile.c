//1 Write a Program to print all alphabets from a to z by skipping 3 alphabets using do while loop.
#include<stdio.h>

main()
{
	char a='a';
	do
	{
		printf("%c\t",a);
		a+=4;
	}while(a<='z');
}
