
#include<stdio.h>
#include<conio.h>
main()
{
	int N,i;
	long fac=1;
	printf("Enter N : ");
	scanf("%d",&N);
		if(N>0)
		{   for(i=N;i>=1;i--)
			fac*=i;//fac=fac*i
			printf("Factorial %d! = %ld",N,fac);
		}
		else if(N==0)
		{
			fac=1;
			printf("Factorial %d! = %ld",N,fac);
		}
		else
			printf("cannot ha ka");
	getch();
	return 0;
}
/*
#include<stdio.h>
#include<conio.h>
main()
{
	int N,i;
	long fac=1;
	printf("Enter N : ");
	scanf("%d",&N);
		if(N==1)
		{
			fac=1;
			printf("Factorial %d! = %ld",N,fac);
		}
		else 
		{
			for(i=N;i>=1;i--)
			fac*=i;//fac=fac*i
			printf("Factorial %d! = %ld",N,fac);
		}
	getch();
	return 0;
}*/
