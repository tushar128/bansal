#include<stdio.h>
int main()
{
	float c,fh;
	printf("enter temprature in centigrade");
	scanf("%f", &c);
	if(c<=-273)
	{
		printf("out of range]\n");
		exit(0);
	}
	
	fh=(c*1.8)+32;
	
printf(" temp in c=  %f amd fh= %f ",c,fh);
return 0;
}
