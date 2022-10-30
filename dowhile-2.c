#include<stdio.h>
#include<conio.h>
main()
{
	int start=500;
	do
	{
		printf("%d ",start);
		start=start-2;
	}
	while (start>=0);
	getch();
	return 0;
}
