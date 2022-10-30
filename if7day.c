#include<stdio.h>
#include<conio.h>
main()
{
	int day;
	printf("Enter day(1-7) : ");
	scanf("%d",&day);
	if(day==1) printf("%d is Sunday\n",day);
  	if(day==2) printf("%d is Monday\n",day);
	if(day==3) printf("%d is Tuseday\n",day);
	if(day==4) printf("%d is wednesday\n",day);
  	if(day==5) printf("%d is Thursday\n",day);
	if(day==6) printf("%d is Friday\n",day);
	if(day==7) printf("%d is Saturday\n",day);
	if(day<1 || day>7) printf("Please Enter only 1-7!!!\n");
}
	


