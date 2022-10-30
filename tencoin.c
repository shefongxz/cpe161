#include<stdio.h>
#include<conio.h>
main()
{
	float x=13.0,y=10.0;
	int ten,coin;
	ten = (int)x/(int)y;
	coin = (int)x%(int)y;
	printf("All change of %.2f \n ",x); 
	printf("Number of Ten bath is %d coins. \n ",ten);
	printf("Number of One bath is %d coins. \n ",coin);
	getch();
	return 0;
}
