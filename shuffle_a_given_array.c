#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

void swap(int *a,int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
void shuffle(int *a ,int n)
{
	time_t t;
	int i=0;
	srand(time(NULL));
	for(int i=n-1;i>0;i--)
	{
		int j=rand() % (i+1);
		printf("%d\t%d\n",a[i],a[j] );
		swap(&a[i],&a[j]);
	}
	printf("after shuffle\n");
	for (int j = 0; i < n; ++i)
		printf("%d\n",a[i] );
}

int main(int argc, char const *argv[])
{
	int n;
	printf("enter length of array\n");
	scanf("%d",&n);
	int a[n];
	printf("enter elements in array\n");
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	shuffle(a,n);
	return 0;
}

// time complexity ----orderof(n)
// space complexity---orderof(1)