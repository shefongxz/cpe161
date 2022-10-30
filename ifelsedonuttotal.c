#include<stdio.h>
#include<conio.h>
main()
{
	int n_donut;
	float total;
	printf("Enter number of donuts : ");
	scanf("%d",&n_donut);
	if(n_donut>=8) {
		total = n_donut*20;
		printf("total = %.2f \n ",total);
	}
	else {
		total = n_donut*25;
		printf("total = %.2f \n ",total);
	}
	getch();
	return(0);
}
