#include<stdio.h>
#include<math.h>
void main()
{
int number,reverse=0,rem,sum=0;
printf("enter number");
scanf("%d",&number);
while(number>0)
{
	rem=number%10;
	reverse=reverse*10+rem;
	sum=pow(rem,3)
	number=number/10;
}
printf("reverse is %d",reverse);
}
