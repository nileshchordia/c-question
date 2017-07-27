// Magic Number----5,25,30(25+5),125,130(125+5),........
#include <stdio.h>

int magic(int num)
{
	int pow=1;
	int result=0;
	while(num)
	{	
		pow=pow*5;
		if(num & 1)
		{
			// printf("NIlesh\n");
			result+=pow;
		}
		// printf("aru\n");
		num>>=1;
	}
	return result;
}

int main(int argc, char const *argv[])
{
	int n;
	printf("Enter the value\n");
	scanf("%d",&n);
	printf("%d\n",magic(n));
	return 0;
}