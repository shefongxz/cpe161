#include<stdio.h>
#include<conio.h>
main()
{
	int i,count;
	float sum,average;
	printf("Enter the last value? : ");
	scanf("%d",&count);
	for (i=1;i<=count;i++)
	{
		//printf("%.2f \n",sum); show 0 1 3 6 10 15 21 28 36 45 ... (0,0+1,1+2,3+3,6+4,10+5,15+6,21+7,28+8,36+9....)
		printf("%d \n",i);
		sum+=i; //sum+=i = sum=sum+i
		//printf("%.2f \n",sum); show 1 3 6 10 15 21 28 36 45 ... (0+1,1+2,3+3,6+4,10+5,15+6,21+7,28+8,36+9....)
	}
	printf("\nThe summation of 1+2+...+%d is %.2f\n",count,sum);// out loop show 1 time
	average=sum/count;
	printf("\nThe average value is %.2f",average);
	getch();
	return 0;
}
