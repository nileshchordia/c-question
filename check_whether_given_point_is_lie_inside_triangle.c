#include <stdio.h>
#include <math.h>
#include <stdlib.h>

float area(int x1,int y1,int x2,int y2,int x3,int y3)
{
	return (abs)(x1*(y2-y3)+x2*(y1-y3)+x3*(y1-y2));     //formula of area of triangle
}

int inside(int x1,int y1,int x2,int y2,int x3,int y3,int x,int y)
{
	float A=area(x1,y1,x2,y2,x3,y3);
	float A1=area(x1,y1,x2,y2,x,y);
	float A2=area(x1,y1,x3,y3,x,y);
	float A3=area(x3,y3,x2,y2,x,y);
	return (A==(A1+A2+A3))?1:0;
}

int main(int argc, char const *argv[])
{
	int x1,y1,x2,y2,x3,y3,x,y;
	printf("enter cordinates of sides of triangle\n");	
	scanf("%d%d%d%d%d%d",&x1,&y1,&x2,&y2,&x3,&y3);
	printf("enter cordinates of points\n");
	scanf("%d%d",&x,&y);
	if(inside(x1,y1,x2,y2,x3,y3,x,y))
		printf("inside triangle\n");
	else
		printf("outside triangle\n");

	return 0;
}



// time complexity-------orderof(1)