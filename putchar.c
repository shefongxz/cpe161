#include<stdio.h>
#include<conio.h>
char ans;
main()
{
	printf("Confirm your answer[y/n] : ");
	ans = getchar (); //getch you not see what you type but getchar you see
	putchar(ans); //show 1 character 
	getch();
	return 0;
}
