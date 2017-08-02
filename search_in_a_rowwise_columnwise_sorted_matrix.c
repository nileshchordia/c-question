#include <stdio.h>


void searchElement(int (*a)[4],int d)
{
	int n=4;
	int i=0,j=n-1;
	while(i<n && j>=0)
	{
		if(a[i][j]==d)
		{
			printf("Matched element in matrix at i = %d and j = %d ,element is  %d\n",i,j,d );
			break;
		}
		if(a[i][j]>d)
			j--;
		else
			i++;
	}
}

int main(int argc, char const *argv[])
{
	int a[4][4]={{10,20,30,40},
				 {15,25,35,45},
				 {27,29,37,48},
				 {32,33,39,50}};
	int d;
	printf("Enter searched element\n");
	scanf("%d",&d);
	searchElement(a,d);
	return 0;
}


// time complexity ----------orderof(n)
// space complexity-----------orderof(1)
// NOTE----this code work for m*n matrix also ---time complexity ---orderof(m+n)