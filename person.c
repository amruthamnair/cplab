#include<stdio.h>
void main()
{
int time,a;
printf("1.time between 2 and 3\n2.time between 3 and 4\n3.time between 4 and 5\n4.greater than 5\n");
scanf("%d",&time);
printf("enter time to complete work:");
scanf("%d",&a);
switch(time)
{
case 1:
	printf("person is highlyefficient:");
	break;
case 2:
	printf("person needs to improve speed:");
	break;
case 3:
	printf("person must be given training to improve speed:");
	break;
case 4:
	printf("worker needs to be terminated:");
	break;
default:
	printf("invalid choice:");
	break;
}
}


