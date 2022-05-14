#include<stdio.h>
main()
{
	void *p;
	int a=10;
	p=&a;
	printf("%d",*(char *)p);
}
