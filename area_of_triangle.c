#include <stdio.h>
#include <math.h>

double areaoftriangle(float a,float b,float c)
{
	if(a<=0 ||b<=0 ||c<=0||a+b<c||b+c<a||c+a<b)
		return 0;
	float s=(a+b+c)/2;
	float v=s*(s-a)*(s-b)*(s-c);
	printf("%f\n",sqrt(v) );
	return v;
		
}


int main()
{
	float a,b,c;
	printf("Enter the value of sides\n");
	scanf("%f%f%f",&a,&b,&c);
	areaoftriangle(a,b,c);
	return 0;
}
