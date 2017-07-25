#include <stdio.h>
#include <stdlib.h>


int addone(int x)
{
	int m=1;
	while(x & m)
	{
		x=x^m;
		// printf("%d\n",x);
		m<<=1;
		// printf("%d\n",m);
	}
	x=x^m;
	return x;
}


int main(int argc, char const *argv[])
{
	int n;
	printf("Enter element\n");
	scanf("%d",&n);
	printf("%d\n",addone(n));
	return 0;
}