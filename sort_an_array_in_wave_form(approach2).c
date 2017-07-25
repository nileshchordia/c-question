#include <stdio.h>
#include <stdlib.h>


void swap(int *p,int *q)
{
	int temp=*p;
	*p=*q;
	*q=temp;
}


void sortinWave(int *p,int len)
{
	for(int i=0;i<len-1;i+=2)
	{
		if(p[i]<p[i-1])
			swap(&p[i],&p[i-1]);

		if(p[i]<p[i+1])
			swap(&p[i],&p[i+1]);
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
	for(int i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
	return 0;
}

//Time complexity----------orderof(n)----------
//space complexity---------orderof(1)--------------