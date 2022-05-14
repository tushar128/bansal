//swap the 2 number with pointer
#include<stdio.h>
main()
{
	int a,b,temp;
	int *p,*q;
	p=&a;
	q=&b;
	printf("enter the elements in it");
	scanf("%d",&a);
	scanf("%d",&b);
	
	printf("before swaping a= %d b=%d ",a,b);
	
	temp=*q;
	*q=*p;
	*p=temp;
	printf(" after the swaping %d %d",*p,*q);
}
