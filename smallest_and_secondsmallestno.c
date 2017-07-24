#include <stdio.h>
#define MAX 100

int main(int argc, char const *argv[])
{
	int first,second,n;
	first=second=MAX;
	printf("Enter the length of array\n");
	scanf("%d",&n);
	int a[n];
	printf("Enter the value of array\n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++)
	{
		if(first>a[i])
		{
			second=first;
			first=a[i];
		}
		else if(second>a[i] && first!=a[i])
		{
			second=a[i];
		}
	}
	printf("smallest element = %d, secondsmallest = %d",first,second);
	return 0;
}

//Time complexity----------orderof(n)----------
//space complexity---------orderof(1)--------------