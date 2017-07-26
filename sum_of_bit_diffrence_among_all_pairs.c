#include <stdio.h>


int sumBitDifference(int *a,int len)
{
	int sum=0;
	for(int i=0;i<32;i++)    //for 32 bits----------number less than or equal to 32
	{
		int count=0;
		for(int j=0;j<len;j++)
		{
			if(a[j] & (1<<i))
				count++;
		}
		sum+=count*(len-count)*2;
	}
	return sum;
}

int main(int argc, char const *argv[])
{
	int n;
	printf("Enter the length of array\n");
	scanf("%d",&n);
	int a[n];
	printf("Enter the elemnts of array\n");
	for (int i = 0; i < n; ++i)
	{
		scanf("%d",&a[i]);
	}
	printf("%d\n",sumBitDifference(a,n));
	return 0;
}

//Time Complexity ----------orderof(n)
// space complexity----------orderof(1)


// 1---0001
// 3---0011
// 6---0110
// output is 12