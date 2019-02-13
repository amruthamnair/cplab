#include<stdio.h>
#include<math.h>
void main()
{
int i,n,number,reverse=0,rem,sum=0;
printf("enter number");
scanf("%d",&n);
n=number;
while(number>0)
{
	rem=number%10;
	reverse=reverse*10+rem;
	sum=sum+(rem*rem*rem);
	number=number/10;
}
if(sum==n)
{
	printf("armstrong  is %d",n);
}
else  
{
	printf("not armstrong is %d",n);
}
}
