#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,s;
	printf("Enter sides of Triangle:");
	scanf("%f%f%f",&a,&b,&c);
	s=(a+b+c)/2;
	printf("Area of triangle:%f",sqrt(s*(s-a)*(s-b)*(s-c)));
	return 0;
}
