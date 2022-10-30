#include<stdio.h>
#include<conio.h>
main()
{
	int x,y;
	x=4;
	y=x++; // y=x x=x+1 
	x++;//x=(x+1)+1
	printf("x = %d \t y = %d \n",x,y); 
	x=4;
	y=++x;//x=x+1 y=x
	printf("x = %d \t y = %d \n",x,y);
	getch();
	return 0;
}
