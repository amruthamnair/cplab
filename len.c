#include<stdio.h>
void main()
{
int length,b,area,perimeter;
printf("enter length:");
scanf("%d",&length);
printf("enter breadth:");
scanf("%d",&b);
area=length*breadth; 
printf("%d is area\n",area);
perimeter=2*(length+b);
printf("%d is perimeter\n",perimeter);
if(area>perimeter)
{
printf("area is %d greater than perimeter is %d","area,perimeter");
}
else
{
printf("area is %d smaller than perimeter is %d","area,perimeter");
}
}
