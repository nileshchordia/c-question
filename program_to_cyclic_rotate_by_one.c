#include<stdio.h>

void rotate(int *a,int n)
{
	int temp=a[n-1];
	for (int i = 0; i < n; ++i)
		printf("%d\n",a[i]);


	for (int i = n-1; i >0; --i)
		a[i]=a[i-1];

	a[0]=temp;
	printf("after shifting by one\n");
	for (int i = 0; i < n; ++i)
	{
		printf("%d\n",a[i]);
	}
}
int main(int argc, char const *argv[])
{
	int a[]={1,2,3,4,5};
	int len=(sizeof(a)/sizeof(a[0]));
	rotate(a,len);
	return 0;
}

// time	complexity----------orderof(n)
// space complexity----------orderof(1)