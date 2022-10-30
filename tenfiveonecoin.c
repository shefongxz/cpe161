#include<stdio.h>
#include<conio.h>
main()
{
	int ten,five,one,x;
	printf("Plaese enter your money : ");
	scanf("%d",&x);
	printf("All change of %d \n",x); 
	ten = x/10;
	five = x%10/5;
	one = x%10%5;
	printf("Number of Ten bath is %d coins.\n",ten);
	printf("Number of Five bath is %d coins.\n",five);
	printf("Number of One bath is %d coins.\n",one);
	getch();
	return 0;
}
