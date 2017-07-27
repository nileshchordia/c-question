#include <stdio.h>

int setBit(int num)
{
	int count=0;
	while(num)
	{
		count+=1;
		num=(num & num-1);
	}

	return count;
	
}

int main(int argc, char const *argv[])
{
	int n;
	printf("Enter the value\n");
	scanf("%d",&n);
	printf("%d\n",setBit(n));
	return 0;
}


//Time Complexity ----------orderof(log(n))
// space complexity----------orderof(1)