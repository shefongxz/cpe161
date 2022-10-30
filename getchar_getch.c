#include<stdio.h>
#include<conio.h>
char ans;
main()
{
	printf("Confirm your answer[y/n] : ");
	ans = getch (); //getch you not see what you type but getchar you see
	printf("You choose %c \n",ans);
	getch();
	return 0;
}
