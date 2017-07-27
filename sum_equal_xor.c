#include <stdio.h>

int sumXor(int num)
{

		for(int i=0;i<num;i++)
		{
			if((num+i)==(num^i))
				printf("%d %d\n",num,i );
		}
		return 0;
	
}

int main(int argc, char const *argv[])
{
	int n;
	printf("Enter the value\n");
	scanf("%d",&n);
	sumXor(n);
	return 0;
}

//Time Complexity ----------orderof(n)
// space complexity----------orderof(1)