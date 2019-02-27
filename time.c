#include<stdio.h>
void main()
{
int time=12;
printf("%d Midnight\n",time);
for(time=1;time<12;time++)
{
printf("%d AM\n",time);
}
printf("%d Noon\n",time);
for(time=1;time<12;time++)
{
printf("%d PM\n",time);
}
}



