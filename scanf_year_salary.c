#include<stdio.h>
#include<conio.h>
int year;
float salary;
main()
{
	//int year;
    //float salary; daimod but if you use in main kor use dai just in main too
	printf("Insert your experience and salary :\n");
	scanf("%d %f",&year,&salary);
	printf("You worked for %d years.\n",year);
	printf("Your salary is %.2f now.\n ",salary);
	getch();
	return 0;
}
