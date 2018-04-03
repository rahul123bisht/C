#include<stdio.h>
int add(int,int);
int sub(int,int);
 main(void)
{
	/* add and sub the no */
	int n1=20, n2=10,a,b;
	a=add(n1,n2);
	b=sub(n1,n2);
	printf("%d + %d = %d\n",n1,n2,a);
	printf("%d - %d = %d",n1,n2,b);
}
add(int n1,int n2)
{
	int t;
	t=n1+n2;
	return t;
}
sub(int n1,int n2)
{
	
	int t;
	t=n1-n2;
	return t;
}
