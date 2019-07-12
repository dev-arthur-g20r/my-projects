#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{
	int num;
	char fname[100],lname[100];
	clrscr();

	printf("\t\t50MAX COUNT-TO-TEN MULTIPLE ENUMERATOR\n");
	printf("\nCount multiples from left to right.\n");
	printf("\nTo ease yourself, count those multiples from 1-50.\n");

	printf("\nEnter a number from 1-10: ");
	scanf("%d",&num);


	switch(num)
	{
	case 1:
		{
			for(;num<=50;num++)
			{
				printf("%d\t",num);
			}
			break;
		}
	case 2:
		{
			for(;num<=50*2;num=num+2)
			{
				printf("%d\t",num);
			}
			break;
		}
	case 3:
		{
			for(;num<=50*3;num=num+3)
			{
				printf("%d\t",num);
			}
			break;
		}
	case 4:
		{
			for(;num<=50*4;num=num+4)
			{
				printf("%d\t",num);
			}
			break;
		}
	case 5:
		{
			for(;num<=50*5;num=num+5)
			{
				printf("%d\t",num);
			}
			break;
		}
	case 6:
		{
			for(;num<=50*6;num=num+6)
			{
				printf("%d\t",num);
			}
			break;
		}
	case 7:
		{
			for(;num<=50*7;num=num+7)
			{
				printf("%d\t",num);
			}
			break;
		}
	case 8:
		{
			for(;num<=50*8;num=num+8)
			{
				printf("%d\t",num);
			}
			break;
		}
	case 9:
		{
			for(;num<=50*9;num=num+9)
			{
				printf("%d\t",num);
			}
			break;
		}
	case 10:
		{
			for(;num<=50*10;num=num+10)
			{
				printf("%d\t",num);
			}
			break;
		}
	default:
		{
			printf("Sorry! The letter, number, decimal or character you have entered is invalid. Numbers 1-10 are only allowed.");
		}
	}

	getch();
}