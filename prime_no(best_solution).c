#include<stdio.h>

int isprime(int n)
{
	if(n<=1)
	{
		printf("Not Prime\n");
		return 0;
	}
	if(n<=3)
	{
		printf("Prime Number\n");
		return 0;
	}
	if(n%2==0||n%3==0)
	{

		printf("Not Prime \n");
		return 0;
	}

	for(int i=5;i*i<=n;i+=6)
	{
		if(n%i==0 || n%(i+2)==0)  //formula for prime number-----6n+-1
		{	printf("Not Prime\n");
			return -1;
		}

	}
	printf("Prime Number\n");
}


int main(int argc, char const *argv[])
{
	int n;
	printf("Enter the elemnt\n");
	scanf("%d",&n);
	isprime(n);
	return 0;
}


//Time complexity----------orderof(root(n))----------
//space complexity---------orderof(1)--------------
