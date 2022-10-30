#include<stdio.h>
#include<conio.h>
main()
{
	int i;
	float sum=0;
	for (i=1;i<=10000;i++)
	{
		sum=sum+(1.0/(i*i));	
	}
	printf("The summation of 1/1+1/4+1/9+1/16...+1/10000 is %f",sum);
	getch();
	return 0;
}
/*
{
	int i;
	float sum=1;
	for (i=1;i<=10000;i+2)
	{
		sum=sum+(1.0/(i*i));	
	}
	printf("The summation of 1/1+1/4+1/16+1/36...+1/10000 is %f",sum);
	getch();
	return 0;
}
*/
