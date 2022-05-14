#include<stdio.h>
int add(int a,int b){

	//printf("enter the elements");
	//scanf("%d %d",&a,&b);
	return a+b;
}
void main()
{
	int c=0;
	int (*p)(int,int)=&add;
	p=add;
	c=(*p)(3,3);
	printf(" Sum of two no %d ",c);
}
