#include<stdio.h>
#include<conio.h>
main()
{
	int i=7;
	double f=5.5;// same float but keep info dai mak khwa
	char c='w';

		printf("%d\n",(i>=6)&&(c=='w')); //if it true program will show 1 but if flase will show 0
		printf("%d\n",(i>=6)||(c==119)); //a=97 b=98 ....w=119
		printf("%d\n",(f<11)&&(i>100)); // && = and || = or 
		printf("%d\n",(c!='p')||(c==119));// && must true 2 side = true ,|| true 1 side = true

	getch();
	return 0;
}
