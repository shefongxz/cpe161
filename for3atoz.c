#include<stdio.h>
#include<conio.h>
main()
{
	char letter;
	for (letter='a';letter<='z';letter++) 
	{
		printf("%c ",letter);	//a b cb d e-z
	}
	getch();
	return 0;
}
/*
	for (char letter='a';letter<='z';letter++) char letter can use just in loop naka
	{
		printf("%d ",letter);	 //97 98 99 100-122
	}
	getch();
	return 0; */ 
