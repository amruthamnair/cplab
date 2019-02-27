#include<stdio.h>
void main()
{
int i,j,line;
printf("enter no of lines");
scanf("%d",&line);
for(i=5;i<=line;i--)
{
	for(j=5;j<=i;j--)
{
	printf("*\t",j);
}
	printf("\n");
}
}
