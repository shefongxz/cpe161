#include<stdio.h>
#include<conio.h>
main()
{
	float shopping;
	float total;
	printf("Enter shopping amount : ");
	scanf("%f",&shopping);
	if(shopping>=5000) { /*add {} cause have many or*/
		total = shopping*0.90;
		printf("total = %.2f \n ",total);
	}
	else {
		total = shopping;
		printf("total = %.2f \n ",total);
	}
	getch();
	return 0;
}

/*  float shopping;
	printf("Enter shopping amount : ");
	scanf("%d",&shopping);
	if(shopping>=5000) 
		printf("total = %.2f \n ",shopping);
	}
	else
		printf("total = %.2f \n ",shopping*0.9);
	getch();
	return 0;
*/ 
