#include <stdio.h>
#include <math.h>

using namespace std;

int check(int n)
{
	// printf("n=%d\n",n );
	int i=sqrt(n);
	// printf("i=%d\n",i );
	if(i*i==n)
		return 1;
	else
		return 0;
}

int isfibonacci(int n)
{
	return check(5*n*n+4)||check(5*n*n-4);  //formula for check fibonacci key
}											//5*n*n+-4

int main(int argc, char const *argv[])
{
	int n;
	printf("Enter number\n");
	scanf("%d",&n);
	if(isfibonacci(n))
		printf("Fibonacci is %d\n",n );
	else
		printf("Not Fibonacci\n");
	return 0;
}