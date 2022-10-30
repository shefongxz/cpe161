#include<stdio.h>
#include<conio.h>
main()
{
	int m=40;
	int a=m++;//a=m m=m+1
	int b=++m;//m=(m+1)+1 b=m
	printf("a = %d \t b = %d ",a,b);
	getch();
	return 0;
}
