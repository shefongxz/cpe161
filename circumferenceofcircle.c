#include<stdio.h>
#include<conio.h>
main()
{
	float radius, circumference;
	printf("Please enter a radius : ",radius);
	scanf("%f",&radius);
	circumference = 3.14159 * 2 * radius;
	printf("Radius = %.4f\nCircumference = %.4f",radius,circumference);
	getch();
	return 0;
}
