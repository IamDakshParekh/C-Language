//2 Write a Program to create a menu-driven program for Telecom call service conversation using nested switch case.

#include<stdio.h>

main()
{
	int a,b,c,d;
	printf("Press 1 for English\n");
	printf("Press 2 for Hindi\n");
	printf("Press 3 for Gujarati\n");
	printf("Enter your Choice: ");
	scanf("%d",&a);
	
	switch(a)
	{
		case 1:
			printf("\nPress 1 for Internet Recharge\n");
			printf("Press 2 for Top-up Recharge\n");
			printf("Press 3 for Special Recharge\n");
			printf("Enter your Choice: ");
			scanf("%d",&b);
			switch(b)
			{
				case 1:
					printf("\nYou have Successfully done Internet Recharge\n");
					break;
				case 2:
					 printf("\nYou have Successfully done Top-up Recharge\n");
					 break;
				case 3:
					printf("\nYou have Successfully done Special Recharge\n");
					break;
				default:
					printf("\nPlease Select Valid Number\n");
			}
			break;
			case 2:
				printf("\nInternet Recharge ke liye 1 dabaiye\n");
				printf("Top-up Recharge ke liye 2 dabaiye\n");
				printf("Special Recharge ke liye 3 dabaiye\n");
				printf("Enter your choice: ");
				scanf("%d",&c);
				switch(c)
				{
					case 1:
						printf("\nAapne safaltapurvak Internet Recharge kar liya he.\n");
						break;
					case 2:
						printf("\nAapne safaltapurvak Top-up Recharge kar liya he.\n");
						break;
					case 3:
						printf("\nAapne safaltapurvak Special Recharge kar liya he.\n");
						break;
					default:
						printf("\nKripya Sahi ank daliye\n");
				}
				break;
			case 3:
				printf("\nInternet Recharge mate 1 dabavo\n");
				printf("Top-up Recharge mate 2 dabavo\n");
				printf("Special Recharge mate 3 dabavo\n");
				printf("Enter your choice: ");
				scanf("%d",&d);
				switch(d)
				{
					case 1:
						printf("\nTame safaltapurvak Internet Recharge karyu chhe.\n");
						break;
					case 2:
						printf("\nTame safaltapurvak Top-up Recharge karyu chhe.\n");
						break;
					case 3: 
						printf("\nTame safaltapurvak Special Recharge karyu chhe.\n");
						break;
					default:
						printf("\nKrupa karine sacho ank dabavo.\n");
				}
				break;
			default:
				printf("\nPlease select valid Input...");
	}
}
