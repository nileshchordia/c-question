#include <stdio.h>

void pigeonSort(int *a,int n)
{
	int max=a[0],min=a[0];
	for (int i = 1; i < n; ++i)
	{
		if(min>a[i])
			min=a[i];

		if(max<a[i])
			max=a[i];
	}

	int range=max-min+1;    //range=====d in complexity
	int hash[range];
	for (int i = 0; i < range; ++i)
	{
		int value=a[i]-min;
		hash[value]=a[i];
	}
	printf("Pigeon Sort\n");
	for (int i = 0; i < range; ++i)
	{
		printf("%d\t",hash[i] );
	}
	printf("\n");
}

int main(int argc, char const *argv[])
{
	int n;
	printf("Enter length of array\n");
	scanf("%d",&n);
	printf("Enter elements in array\n");
	int a[n];
	for (int i = 0; i < n; ++i)
	{
		scanf("%d",&a[i]);
	}
	pigeonSort(a,n);
	return 0;
}

// time complexity ----------orderof(n*d)
// space complexity-----------orderof(d)