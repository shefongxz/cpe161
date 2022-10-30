/*#include<stdio.h>
#include<conio.h>
main()
{
	long count,n,sum;
	count=0;
	sum=0;
	{
		for(n=1; n<=1000; n++)	
		{
			if((n%17==0)||(n%19==0))
			{
				printf("%d ",n);
				count++;
				sum+=n;
			}
			
		}
		printf("\ncount = %ld",count);
		printf("\nsum = %ld",sum);
	}
	getch();
	return 0;

} */
#include<stdio.h>
#include<conio.h>
main()
{
	long count,n,sum;
	count=0;
	sum=0;
	{
		for(n=1; n<=1000; n++)	
		{
			if((n%17==0)&&(n%19==0))
			{
				printf("%d ",n);
				count++;
				sum+=n;
			}
			
		}
		printf("\ncount = %ld",count);
		printf("\nsum = %ld",sum);
	}
	getch();
	return 0;

} 

/*#include<stdio.h>
#include<conio.h>
main()
{
	int count,count1,n;
	count=0;
	count1=0;
	{
		for(n=1; n<=1000; n++)	
		{
			if(n%17==0)
			{
				//printf("%d ",n);
				count++;
			}
			if(n%19==0)
			{
				//printf("%d ",n);
				count1++;
			}
		}
		printf("\ncount = %d",count);
		printf("\ncount = %d",count1);
	}
	getch();
	return 0;
} */
