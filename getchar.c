#include<stdio.h>
#include<conio.h>
char ans;
main()
{
	printf("Confirm your answer[y/n] : ");
	ans = getchar ();
	printf("You choose %c \n",ans);
	getch();
	return 0;
}
