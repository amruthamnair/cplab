#include<stdio.h>
void main()
{ 
int ram,shyam,ajay;
printf("enter age of ram:");
scanf("%d",&ram);
printf("enter the age of shyam:");
scanf("%d",&shyam);
printf("enter the age of ajay:");
scanf("%d",&ajay);
if(ram<shyam&&ram<ajay)
{
printf("age of ram is %d is smaller\n",ram);
}
else 
{
if(shyam<ram&&shyam<ajay)
{
printf("age of shyam is smaller\n",shyam);
}
else
{ 
printf("age of ajay is %d is smaller\n",ajay);
}
}
}


