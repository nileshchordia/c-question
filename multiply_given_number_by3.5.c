#include <stdio.h>

int multiply(int n)
{
	return (n<<1)+n+(n>>1);
}


int main(int argc, char const *argv[])
{
	int n;
	printf("Enter the numebr\n");
	scanf("%d",&n);
	printf("%d\n",multiply(n));
	return 0;
}