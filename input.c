#include<stdio.h>
#include<string.h>
int main()
{
	char message[13];
	int count, i;

	strcpy(message, "Hello World!");

	printf("How many times do you wanna repeat? ");
	scanf("%d", &count);

	for (i=0; i<count; i++)
	printf("%d - %s\n",i,message);
}