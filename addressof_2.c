#include <stdio.h>
int main()
{
	int int_var = 5;
	int *int_ptr;

	int_ptr = &int_var;

	printf("int ptr = 0x%08x\n", int_ptr);
	printf("&int ptr = 0x%08x\n", &int_ptr);
	printf("*int ptr = 0x%08x\n", *int_ptr);

	printf("int var is located at 0x%08x and contains %d\n", &int_var , int_var);
	printf("int ptr is located at 0x%08x and contains 0x%08x, and points %d", &int_ptr , int_ptr, *int_ptr);

}