// C(n,k)
// C(n,k)=C(n,n-k)

// n
//  C
//   k


#include <stdio.h>


void binomialCoefficient(int n,int k)
{
	int result=n;
	
	if(k>n-k)
		k=n-k;
	int b=k;


	for (int i = 1; i < k; ++i)
	{
		result*=(n-i);
		b*=i;

	}
	printf("%d\t%d\n", result,b);
	printf("%.2f\n",(float)result/b );



}

int main(int argc, char const *argv[])
{
	int n,k;
	printf("Enter two elements\n");
	scanf("%d%d",&n,&k);
	binomialCoefficient(n,k);
	return 0;
}

// Time Complexity----------orderof(k)
// Space Complexity---------orderof(1)