#include<stdio.h>
void main()
{
int s1,s2,s3,s4,s5,per;
printf(" enter the marks of subject");

scanf("%f %f %f %f %f",&s1,&s2,&s3,&s4,&s5);

per=s1+s2+s3+s4+s5/0.5;

if(per >= 60)
{
	printf(" grade a\n");
	
}
else{

	if(per >= 50)
	{
		printf("grade b\n");
	}
	else
	if(per >= 40)
	{
		printf("grade c\n");
	}
	else{
		printf("filed");
	}
}
}
