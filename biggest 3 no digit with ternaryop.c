#include<stdio.h>
main()
{
	int a,b,c,big;
	printf("enter the 3 number\n");
	scanf("%d %d %d ",&a, &b ,&c);
	big =(a>b && a>c) ? (a) :((b>c)?(b) : (c));
	printf("biggest is %d\n",big);
	return 0;
}
