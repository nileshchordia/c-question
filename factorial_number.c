#include <stdio.h>


int factorial(int n)
{
	if(n<=1)
		return 1;
	else
		return factorial(n-1)*n;
}
int main(int argc, char const *argv[])
{
	int n;
	printf("Enter number\n");
	scanf("%d",&n);
	printf("%d\n",factorial(n));
	return 0;
}