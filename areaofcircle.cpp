#include<stdio.h>
#include<conio.h>
main()
{
	float radius, area;
	printf("Please enter a radius : ",radius);
	scanf("%f",&radius);
	area = 3.14159 * radius * radius;
	printf("Radius = %.4f\nArea = %.4f",radius,area);
	getch();
	return 0;
}
