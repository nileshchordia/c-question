#include <stdio.h>


void prime(int n)
{
	int a[n];
	for (int i = 0; i <= n; ++i)
	{
		a[i]=1;
	}
	
	for(int i=2;i<=n;i++)
	{
		for(int j=2*i;j<=n;j+=i)
				a[j]=0;
	}
	for (int i = 2; i <=n; ++i)
	{
		if(a[i]==1)
			printf("%d\t",i);
	}
}
int main(int argc, char const *argv[])
{
	int n;
	printf("Enter number\n");
	scanf("%d",&n);
	prime(n);
	return 0;
}