#include <stdio.h>
int main()
{
	int a,b;
	float c,d;

	a = 13;
	b = 5;

	c = a / b;
	d = (float) a /(float)b;

	printf("[Integers] a = %d\t b = %d\n",a,b);
	printf("[Float]    c = %f\t d = %f\n",c,d);
}