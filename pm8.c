#include<stdio.h>
void main()
{
	int a=10,b=20;
	printf("swap the 2 no without using third variable ");
	scanf(" %d %d",&a,&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("swap %d= a , %d=b",a,b);
}
