#include <stdio.h>
#include <stdlib.h>


int compareFun(const void *a,const void *b)
{
	return (*(int  *)a- *(int *)b);
}


void swap(int *p,int *q)
{
	int temp=*p;
	*p=*q;
	*q=temp;
}

int sortinWave(int *a,int len)
{
	qsort(a,len,sizeof(int),compareFun);

	for(int i=0;i<len-1;i+=2)
	{	swap(&a[i],&a[i+1]);
		// printf("%d\t",a[i]);
	}
	for(int i=0;i<len;i++)
	{
		printf("%d\t",a[i]);
	}

}


int main(int argc, char const *argv[])
{
	int n;
	printf("Enter the legth of array\n");
	scanf("%d",&n);
	int a[n];
	printf("Enter the  value of elemnt in array\n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	sortinWave(a,n);
	return 0;
}

//Time complexity----------orderof(nlogn)----------
//space complexity---------orderof(1)--------------