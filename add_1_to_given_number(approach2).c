#include <stdio.h>
#include <stdlib.h>


int addone(int x)
{

	return -(~x);
}


int main(int argc, char const *argv[])
{
	int n;
	printf("Enter element\n");
	scanf("%d",&n);
	printf("%d\n",addone(n));
	return 0;
}