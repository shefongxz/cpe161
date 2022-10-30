#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
	int i;
	float sum=0;
	for (i=1;i<=1000;i++)
	{
		//printf("1/%d ",i);
		sum=sum+(1.0/i); //use 1.0 becuse if use 1 the fraction will disappear 
		//sum+=1.0/i
	}
	printf("The summation of 1/1+1/2+...+1/1000 is %f",sum);
	getch();
	return 0;
}
