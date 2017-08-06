#include <stdio.h>

int catalan(int n)
{
	if(n<=1)
		return 1;
	int res=0;
	for(int i=0;i<n;i++)
	{

		res+= catalan(i)*catalan(n-i-1);
	}
	return res;

}
int main(int argc, char const *argv[])
{
	int n;
	printf("enter number\n");	
	scanf("%d",&n);	
	printf("%d\n",catalan(n));
	return 0;
}