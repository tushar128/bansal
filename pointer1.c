#include<stdio.h>
main(){
	
	int a=10;
	int *ptr;
	int **q,***r,****s;
	ptr=&a;
	q=&ptr;
	r=&q;
	s=&r;
	printf("%d \n",ptr);//>>>adress of a
	printf("%d \n",*ptr);//>>>value of a
	printf("%d\n",&a);//>>>adress of a
	printf("%d \n",&ptr);//>>>adress of p
	
		printf("%d \n",q);//>>>adress of p
		printf("%d \n",*q);//>>>adress of a
		printf("%d \n",**q);// vaue of a
		printf("%d \n",&q);//value of q
		
		printf("%d \n \n",r);// >>adress of q
		printf("%d \n",*r);// >>>adress of p
		printf("%d \n",**r);//>>> adrss of a
		printf("%d \n",***r);//>>value of a
		printf("%d \n",&r);//>> adress of r
		
}	
