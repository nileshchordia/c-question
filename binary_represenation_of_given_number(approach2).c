#include <stdio.h>



void binarynum(int n)
{
	if(n>1)
	{
		binarynum(n/2);
	}
	printf("%d\n",n%2);
}

int main(int argc, char const *argv[])
{
	int n,d;       

	printf("Enter the value\n");
	scanf("%d",&n);
	binarynum(n);
	return 0;
}


//Time Complexity ----------orderof(logn)
// space complexity----------orderof(logn)