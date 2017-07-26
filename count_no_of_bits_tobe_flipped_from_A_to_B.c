#include <stdio.h>

int countBit(int a,int b)
{

	int c=a^b;
	int sum=0;
	for(int i=0;i<4;i++)  //for 4 bit representation------
	{
		sum += c&1;
		// printf("c=%d\n",c);
		c>>=1;

	}
	// printf("%d\n",sum);

	return sum;
}

int main(int argc, char const *argv[])
{
	int a,b;
	printf("Enter the value of A and B\n");
	scanf("%d%d",&a,&b);
	printf("%d\n",countBit(a,b));
	return 0;
}