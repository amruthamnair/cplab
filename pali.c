#include<stdio.h>
void main()
{
int number,reverse=0,rem,n;
printf("enter number");
scanf("%d",&number);
n=number;
while(number>0)
{
	rem=number%10;
	reverse=reverse*10+rem;
	number=number/10;
}
if(n==reverse)
	{
	printf("%d is pali",n);
	}
}


