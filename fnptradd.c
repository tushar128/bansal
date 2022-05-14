#include<stdio.h>
int add(int a,int b){
	//int a=200,b=200;
	printf("enter the elements");
	scanf("%d %d",&a,&b);
	return a+b;
}
void main()
{
	int (*p)(int,int ),c;
	p=add;
	p();
//	printf(" Sum of two no %d ",c);
}
