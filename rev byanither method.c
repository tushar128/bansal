#include<stdio.h>
main()
{
	int n,r,sum=0;
	printf("enter the elements ");
	scanf("%d",&n);
	while(n>0)
	{
		r=n%10;
		//sum=sum*10+r;
		printf("%d",r);
		n=n/10;
	}
}
