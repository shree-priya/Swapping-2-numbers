#include<stdio.h>
int main()
{
	int a=100,b=500;
	printf("Before swapping the values:  a=%d b=%d",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("\nAfter swapping the value:  a=%d b=%d",a,b);
	return 0;
}
