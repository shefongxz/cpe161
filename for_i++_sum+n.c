#include<stdio.h>
#include<conio.h>
main()
{
	int i,count;
	float n,sum,average;
	sum=0;
	printf("How many numbers will you compute their sum and average value? : ");
	scanf("%d",&count);
	printf("Please enter %d value\n",count);
	for (i=1;i<=count;i++)
	{
		scanf("%f",&n);
		sum+=n; //sum=sum+n
	}
	printf("\nThe summation of value is %.2f\n",sum);
	average=sum/count;
	printf("\nThe average value is %.2f",average);
	getch();
	return 0;
}
