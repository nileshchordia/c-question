#include <stdio.h>

int toggle(int num)
{

		int solution=0;
		int nextbit=1;
		int lastbit;
		while(num)
		{
			lastbit=num&1;

			if(lastbit==0)
			{
				solution |=nextbit;
			}
			nextbit<<=1;
			num>>=1;
		}
		return solution;
	
}

int main(int argc, char const *argv[])
{
	int n;
	printf("Enter the value\n");
	scanf("%d",&n);
	printf("%d\n",toggle(n));
	return 0;
}