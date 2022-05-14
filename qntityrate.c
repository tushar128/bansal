#include<stdio.h>
main()
{
	int qty,discount;
	float rate,net_amnt;
	printf("enter the quntity and rate");
	scanf("%d %f",&qty,&rate);
	if(qty>=100)
	{
		discount=10;
	}
	else 
	discount=0;
	net_amnt=qty*rate-discount;
		printf("net_amount=%f",net_amnt);
}
