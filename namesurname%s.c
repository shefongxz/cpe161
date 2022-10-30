#include<stdio.h>
#include<conio.h>
main()
{
	char name[15];
	char surname[30];
	printf("Insert your name and surname : ");
	scanf("%s %s",name,surname); //if use %s no&(address) if u use gets u can maiyak pen name surname you can only name
	printf("Hello %s %s.\n",name,surname);
	return 0;
}
	//printf("Insert your name and surname : ");
	//gets(name); //if use %s no&(address) if u use gets u can maiyak pen name surname you can only name
	//printf("Hello %s.\n",name);
	//return 0;

