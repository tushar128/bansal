#include<stdio.h>
main()
{
	int num1,num2,res;
	printf("%d", sizeof(int));;
	printf(" enter the element");
	scanf("%d %d",&num1, &num2);
	res=num1+num2;
	printf("sum is %d",res);
	printf("sum of %d and %d is %d ",num1,num2,res);
}
