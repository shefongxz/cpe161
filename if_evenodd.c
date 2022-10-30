#include<stdio.h>
#include<conio.h>
main()
{
	int number;
	printf("Enter integer number : ");
	scanf("%d",&number);
	if(number%2==0) 
		printf("%d is even number \n ",number);
	if(number%2==1) 
		printf("%d is odd number \n ",number);
	getch();
	return 0;
}


