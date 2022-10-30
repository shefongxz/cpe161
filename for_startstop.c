#include<stdio.h>
#include<conio.h>
main()
{
	int i,start,stop;
	float sum=0;
	printf("Please enter start number : ");
	scanf("%d",&start);
	printf("Please enter stop number : ");
	scanf("%d",&stop);
	for (i=start;i<=stop;i++)
	{
		printf("%d\n",i);
		sum += i;
	}
	printf("sum = %.2f",sum);
	getch();
	return 0;
}
