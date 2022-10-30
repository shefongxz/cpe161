#include<stdio.h>
#include<conio.h>
main()
{
	int A;
	printf("Enter point : ");
	scanf("%d",&A);
	if((A<=100)&&(A>=60)) 
		printf("%d ponits = Good \n ",A);
	else if ((A<60)&&(A>=40))
		printf("%d ponits = Pass \n ",A);
	else 
		printf("%d ponits = Fail \n ",A);	
	getch();
	return 0;
}


