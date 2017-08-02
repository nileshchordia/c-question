#include <stdio.h>


int peakElement(int *a,int i,int n)
{
	int start=i,end=n-1;
	while(start<=end)
	{
		
		int mid=(start+end)/2;


		if(a[mid]>a[mid-1] && a[mid]>a[mid+1])
			return a[mid];
		if(a[mid]<a[mid-1])
			end=mid;
		else
			start=mid+1;
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
	printf("peak Element %d\n",peakElement(a,0,n));
	return 0;
}

// time complexity ----------orderof(log(n))
// space complexity-----------orderof(1)