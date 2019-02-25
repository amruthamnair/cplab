#include<stdio.h>
void main()
{
int length,breadth,area,perimeter;
printf("enter length:");
scanf("%d",&length);
printf("enter breadth:");
scanf("%d",&breadth);
area=length*breadth; 
printf("%d is area\n",area);
perimeter=2*(length+breadth);
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
