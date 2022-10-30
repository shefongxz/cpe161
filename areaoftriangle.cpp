#include<stdio.h>
#include<conio.h>
main()
{
	float h,area,b;
	printf("Please enter Height : ");
	scanf("%f",&h);
	printf("Please enter Base : ");
	scanf("%f",&b);
	area = 0.5 * h * b;
	printf("Height = %.4f\nBase =  %.4f\nArea = %.4f",h,b,area);
	getch();
	return 0;
}
