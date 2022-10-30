#include<stdio.h>
#include<conio.h>
main()
{
	int a=2,b=4,c=8,d=10,f=3;
	printf("%d \n",a+(c+d)/a*b+d/a+f+10); //2+(8+10)/2*4+10/2+3+10 = 2+(18/2)*4+10/2+3+10 = 2+(9*4)+(10/2)+3+10 = 2+(36)+(5)+3+10 = 
	getch();
	return 0;
}
