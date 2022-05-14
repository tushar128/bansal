#include<stdio.h>
int main()
{
	int n,a=0,b=1,c;
//	printf("enyter the element");
//	scanf("%d",&n);
	//for( i=1;i<=n;i++)
	while(a<=13)
	{
		printf("%d\n",a);
		c=a+b;
		a=b;
		b=c;
	}
	return 0;
}
