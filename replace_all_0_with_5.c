#include <stdio.h>



int rec(int n)
{
	if(n==0)
		return 0;
	int rem;
	
	rem=n%10;
	if(rem==0)
		rem=5;
	return rec(n/10)*10+rem;
	// printf("%d\n",rev);
}
int replace0to5(int n)
{
	if(n==0)
		n=5;
	printf("%d\n",rec(n));
}
int main(int argc, char const *argv[])
{
	int n;
	printf("Enter number\n");
	scanf("%d",&n);
	replace0to5(n);
	return 0;
}