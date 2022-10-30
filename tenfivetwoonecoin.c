#include<stdio.h>
#include<conio.h>
main()
{
	int ten,five,two,one,money;
	printf("Enter Your money : ");
	scanf("%d",&money);
	ten=money/10;
	five=money%10/5;
	two=money%10%5/2;
	one=money%10%5%2;
	printf("ten coins = %d \n",ten);
	printf("five coins = %d \n",five);
	printf("two coins = %d \n",two);
	printf("one coins = %d \n",one);
	getch();
	return 0;
}
