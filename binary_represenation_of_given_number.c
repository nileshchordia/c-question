#include <stdio.h>



void binarynum(int n)
{

	for(int i=1<<8 ;i>0;i=i/2)
	{
		// printf("nielsh\n");
		if(i & n)
			printf("1\n");
		else
			printf("0\n");
	}
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
// space complexity----------orderof(1)