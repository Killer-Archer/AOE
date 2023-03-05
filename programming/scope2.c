#include <stdio.h>

int j = 42;

void fun3()
{
	int i= 11, j = 999;
	printf("\t\t\t[in Func3] i = %d, j = %d\n",i,j);
}

void fun2()
{
	int i = 7;
	printf("\t\t[in Func2] i = %d, j = %d\n",i,j);
	printf("\t\t[in Func2] setting j = 1137\n",i);
	j = 1137;
	fun3();
	printf("\t\t[back in Func2] i = %d, j = %d\n",i,j);
}

void fun1()
{
	int i = 5;
	printf("\t[in Func1] i = %d, j = %d\n",i,j);
	fun2();
	printf("\t[back in Func1] i = %d, j = %d\n",i,j);
}

int main()
{
	int i = 3;
	printf("[in main] i = %d, j = %d\n",i,j);
	fun1();
	printf("[back in main] i = %d, j = %d\n",i,j);
}