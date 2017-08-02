#include <stdio.h>


int peakElement(int *a,int n)
{
	for (int i = 0; i < n; ++i)
	{
		if(i==0 && a[i]>a[i+1])
		{
			printf("peakElement is %d\n",a[i] );
			break;
		}

		if(i>0 && a[i]>a[i-1] && i<n && a[i]>a[i+1])
		{
			printf("peakElement is %d\n",a[i] );
			break;
		}

	}
}
int main(int argc, char const *argv[])
{
	int n;
	printf("Enter length of array\n");
	scanf("%d",&n);
	int a[n];
	printf("Enter element in array\n");
	for (int i = 0; i < n; ++i)
	{
		scanf("%d",&a[i]);
	}
	peakElement(a,n);
	return 0;
}

// time complexity ----------orderof(n)
// space complexity-----------orderof(1)