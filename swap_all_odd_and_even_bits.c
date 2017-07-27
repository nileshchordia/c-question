#include <stdio.h>

int swapBit(int num)
{
	int even=num & 0XAAAAAAAA;
	int odd =num & 0X55555555;
	even=even>>1;
	odd=odd<<1;
	num = even|odd;
	return num;

}



int main(int argc, char const *argv[])
{
	int n;
	printf("Enter the value\n");
	scanf("%d",&n);
	printf("%d\n",swapBit(n));
	return 0;
}


//Time Complexity ----------orderof(1)
// space complexity----------orderof(1)