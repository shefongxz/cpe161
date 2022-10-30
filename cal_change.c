#include<stdio.h>
#include<conio.h>
float cal_change(float price,float money)
{
	float x;
	x=money-price;
	return(x);
}
main ()
{
	float price,money,change;
	printf("Enter good price? : "); 
	scanf("%f",&price);
	printf("Enter received money? : "); 
	scanf("%f",&money);
	change = cal_change(price,money);
	printf("Customer change = %.2f",change); 
	getch();
	return 0;
}
