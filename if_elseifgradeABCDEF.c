/*
	if((A<=100)&&(A>=80)) 
		printf("Score is %d You get Grade A \n ",A);
	else if ((A<=79)&&(A>=70))
		printf("Score is %d You get Grade B \n ",A);
	else if ((A<=69)&&(A>=60))
		printf("Score is %d You get Grade C \n ",A);
	else if ((A<=59)&&(A>=50))
		printf("Score is %d You get Grade D \n ",A);	
	else 
		printf("Score is %d You get Grade F \n ",A);	
	getch();
	return 0;
}
 */
#include<stdio.h>
#include<conio.h>
main()
{
    float A;
	printf("Enter your score : ");
	scanf("%f",&A);
	if(A>=0 && A<=100)
	{
		if(A>=80)
			printf("Score is %f You get Grade A \n ",A);
		else if (A>=70)
			printf("Score is %f You get Grade B \n ",A);
		else if (A>=60)
			printf("Score is %f You get Grade C \n ",A);
		else if (A>=50)
			printf("Score is %f You get Grade D \n ",A);	
		else 
			printf("Score is %f You get Grade F \n ",A);
	}
	else{
		printf("A score must be 0-100");
	}
	getch();
	return 0;
}
/*or
	if(A<50)
		printf("Score is %f You get Grade F \n ",A);
	else if (A<60)
		printf("Score is %f You get Grade D \n ",A);
	else if (A<70)
		printf("Score is %f You get Grade C \n ",A);
	else if (A<80)
		printf("Score is %f You get Grade B \n ",A);	
	else 
		printf("Score is %f You get Grade A \n ",A);	
	getch();
	return 0;
}
or
	if(A<0 || A>100)
	{
		printf("A score must be 0-100");
	}		
	{
		if(A>=80)
			printf("Score is %f You get Grade A \n ",A);
		else if (A>=70)
			printf("Score is %f You get Grade B \n ",A);
		else if (A>=60)
			printf("Score is %f You get Grade C \n ",A);
		else if (A>=50)
			printf("Score is %f You get Grade D \n ",A);	
		else 
			printf("Score is %f You get Grade F \n ",A);
	}
	else{
		printf("A score must be 0-100");
	}
*/




