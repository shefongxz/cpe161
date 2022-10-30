
#include<stdio.h>
#include<conio.h>
main()
{
	int count,n;
	while(count<10)
	{
		printf("Enter number : ");
		scanf("%d",&n);
		for(count=n; count<=100; count++)	
		{
			if(count%10==0)
				printf("%d\n",count);
			else{
				continue;
				printf("Please enter the number can be divided by ten!!!\n");
			}
		}
	}
	getch();
	return 0;

} 

/*#include<stdio.h>
#include<conio.h>
main()
{
	int count,n;
	while(count<10)
	{
		printf("Enter number : ");
		scanf("%d",&n);
		for(count=n; count<=100; count++)	
		{
			if(count%10==0)
				printf("%d\n",count);
		}
	}
	getch();
	return 0;
}
*/

/*#include<stdio.h>
#include<conio.h>
main()
{
	int count,n;
	while(count<10)
	{
		printf("Enter number : ");
		scanf("%d",&n);
		for(count=n; count<=100; count++)	
		{
			if(count%10==0)
				printf("%d\n",count);
			else{
				printf("Please enter the number can be divided by ten!!!\n");
			}
		}
	}
	getch();
	return 0;

} */
