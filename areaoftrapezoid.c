#include<stdio.h>
#include<conio.h>
main()
{
	float h,area,l1,l2;
	printf("Calculate the area of a trapezoid\n");
	printf("Please enter Height : ");
	scanf("%f",&h);
	printf("Please enter L1 : ");
	scanf("%f",&l1);
	printf("Please enter L2 : ");
	scanf("%f",&l2);
	area = 0.5 * h * (l1+l2);
	printf("Area of trapezoid = %.4f",area);
	getch();
	return 0;
}
