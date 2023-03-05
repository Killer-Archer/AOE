#include <stdio.h>

void fun3()
{
	int i= 11;
	printf("\t\t\t[in Func3] i = %d\n",i);
}

void fun2()
{
	int i = 7;
	printf("\t\t[in Func2] i = %d\n",i);
	fun3();
	printf("\t\t[back in Func2] i = %d\n",i);
}

void fun1()
{
	int i = 5;
	printf("\t[in Func1] i = %d\n",i);
	fun2();
	printf("\t[back in Func1] i = %d\n",i);
}

int main()
{
	int i = 3;
	printf("[in main] i = %d\n",i);
	fun1();
	printf("[back in main] i = %d\n",i);
}