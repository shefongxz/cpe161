#include<stdio.h>
#include<conio.h>
main()
{
	int digit=0,A;
	printf("Plese Enter Number : ");
	scanf("%d",&A);
	while (digit<=A)
	{
		printf("%d \n",digit);
		++digit;
	}
	getch();
	return 0;
}
