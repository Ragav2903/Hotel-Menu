#include<stdio.h>
int main()
{
	int choice=0;
	printf("What would you like to have for Breakfast \n 1.Dosa\n2.Poori\n3.Poha\n4.Idly\n5.Paratha\n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			printf("Dosa-Rs 40");
			break;
		case 2:
			printf("Poori-Rs 45");
			break;
		case 3:
		    printf("Poha-Rs 50");
		    break;
		case 4:
		    printf("Idly-Rs 35");
			break;
		case 5:
		    printf("Paratha-Rs 40");
			break;
		default:
		    printf("No Thanks");		
	}
	return 0;
}
