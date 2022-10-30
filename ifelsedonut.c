#include<stdio.h>
#include<conio.h>
main()
{
	int donut;
	printf("Enter number of donuts : ");
	scanf("%d",&donut);
	if(donut>=8)
		printf("1 donut costs = 20 \n ",donut);
	else
		printf("1 donut costs = 25 \n ",donut);
	getch();
	return(0);
}
