#include <stdio.h>
#include <string.h>
#include <stdlib.h>


char * reverse(char *str)
{
	int start=0;
	int end=strlen(str)-1;
	for (start,end;start<end ;++start,--end)
	{
		// char x=str[start];
		// char y=str[end];
		// printf("%c\t%c\n",x,y);
		str[start]^=str[end];
		str[end]^=str[start];
		str[start]^=str[end];
		// printf("%c\t%c\n",x,y);	
	}
	// printf("%s\n",str);
	return str;
}
int main(int argc, char const *argv[])
{
	int n;
	printf("Enter the length of string\n");
	scanf("%d",&n);
	char  *str;
	str=(char *)malloc(sizeof(char)*n);
	scanf("%s",str);
	printf("%s\n",reverse(str));
	return 0;
}