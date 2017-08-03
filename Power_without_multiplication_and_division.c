#include <stdio.h>



int power(int b,int k)
{
	int result=b;
	int n=b;
	for (int i = 0; i < k-1; ++i)
	{
		for(int j=0;j<n-1;j++)
		{
			result+=b;
		}
		b=result;
	}
	return result;
}

int main(int argc, char const *argv[])
{
	int n,k;
	printf("enter base and power\n");
	scanf("%d%d",&n,&k);
	printf("%d\n",power(n,k));
	return 0;
}

// Time Complexity----------orderof(k*n)
// Space Complexity---------orderof(1)