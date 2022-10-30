#include<stdio.h>
#include<conio.h>
main()
{
	int a,count=0;
	while(count<10)
	{
		printf("Enter number : ");
		scanf("%d",&a);
		if(a==0)	
		{
			printf("You enter wrong number!\n");	
			printf("Please enter right number in next time!!!\n");	
			break;
		}
		else
		{
			printf("You enter right number\n");
		}
		count++;
	}
	getch();
	return 0;
}
   /* while(1) // if u do like this loop 4ever cause it always true but it you need it to stop you must write code and break
    {
    	printf("Enter number : ");
    	scanf("%d",&a)
    	printf("You enter right number\n");
	}*/ 

