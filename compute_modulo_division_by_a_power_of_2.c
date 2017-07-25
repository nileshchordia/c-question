#include <stdio.h>


int modulo(int n,int d)
{
	return n^d;
}
int main(int argc, char const *argv[])
{
	int n,d;
	printf("Enter the numebr\n");
	scanf("%d%d",&n,&d);//d is power of 2---------
	printf("%d\n",modulo(n,d));

	return 0;
}