#include <stdio.h>
#include <string.h>
#define LEN 256

void special(char *s)
{
	int hash[LEN]={0};
	int d=strlen(s);
	// printf("%d\n",d);
	for(int i=0;i<d;i++)
	{
		hash[s[i]]+=1;
	}
	int i=0;


	while(i<=LEN)
	{
		if(hash[i]!=0)
		{
			if(hash[i]>1)
			{
				for(int j=0;j<hash[i];j++)
				{
					printf("%c",i+j);
				}
			}
			else
			{
				printf("%c",i );
			}
		}
		i++;
	}
	printf("\n");
}



int main(int argc, char const *argv[])
{
	char s[]="aabcddf";
	special(s);
	return 0;
}


//Time Complexity ----------orderof(n)
// space complexity----------orderof(1)