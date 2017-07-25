#include <stdio.h>

int iseven(int n)
{
	return !(n&1);
}


int main(int argc, char const *argv[])
{
	int n;
	printf("Enter the numebr\n");
	scanf("%d",&n);
	iseven(n)?printf("Even\n"):printf("Odd\n");
	return 0;
}