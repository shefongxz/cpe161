#include<stdio.h>
#include<math.h>
main()
{
	float a,b,c,ans1,ans2,insqure;
	printf("Please enter a,b and c : ");
    scanf("%f %f %f",&a,&b,&c);
    insqure=b*b-4*a*c;
    ans1=(((-b)-(sqrt(insqure)))/(2*a));
    ans2=(((-b)+(sqrt(insqure)))/(2*a));
	printf("answer1 = %f\n",ans1);
	printf("answer2 = %f",ans2);
	return 0;
}


