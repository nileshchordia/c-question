#include <stdio.h>


void swapAwesomeLogic(int a,int b)
{
	int n=100,temp;					 //n is greater than a,b-----------
	temp=(a+b*n);               
	a=temp/n;
	b=temp%n;
	printf("swap numbers are %d\t%d\n",a,b);
}
int main(int argc, char const *argv[])
{
	int a,b;
	printf("enter 2 number\n");
	scanf("%d%d",&a,&b);
	swapAwesomeLogic(a,b);
	return 0;
}