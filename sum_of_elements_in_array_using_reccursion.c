#include <stdio.h>



int sumReccursion(int *a,int n)
{
	if(n<=0)
		return 0;
	return sumReccursion(a,n-1)+a[n-1];
}
int main(int argc, char const *argv[])
{
	int n;
	printf("Enter length of array\n");
	scanf("%d",&n);
	int a[n];
	printf("Enter elements of array\n");
	for (int i = 0; i < n; ++i)
	{
		scanf("%d",&a[i]);
	}
	printf("sum = %d\n",sumReccursion(a,n));
	return 0;
}