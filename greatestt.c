#include<stdio.h>
void main()
	{
	int number1,number2,number3,big;
	printf("enter integer numbers");
	scanf("%d%d%d",&number1,&number2,&number3);
	if(number1>number2&&number1>number3)
	{
		printf("%d is big",number1);
	if(number2>number1&&number2>number3)
		printf("%d is big",number2);
	}
	else 
	{
		printf("%d is big",number3);
	}
	}
