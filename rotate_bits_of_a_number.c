#include<stdio.h>
#define INITBIT 32

int rotateleft(int n,int d)
{

	return n<<d|n>>INITBIT-d;
}

int rotateright(int n,int d)
{
	return n>>d|n<<INITBIT-d;
}





int main(int argc, char const *argv[])
{
	int n,d;       //rotate n by digit d-----------------
	printf("Enter the value\n");
	scanf("%d",&n);
	printf("Enter the digit\n");
	scanf("%d",&d);
	printf("left rotattion %d\n",rotateleft(n,d));
	printf("right rotation  %d\n",rotateright(n,d) );
	return 0;
}


//Time Complexity ----------orderof(1)
// space complexity----------orderof(1)