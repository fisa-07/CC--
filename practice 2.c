#include<stdio.h>
int main()
{
	float l,b,r;
	printf("Enter length,breath and radius:");
	scanf("%f%f%f",&l,&b,&r);
	printf("Area and Perimeter:%f\t%f\n",l*b,2*(l+b));
	printf("Area and Cercumference:%f\t%f",3.14*r*r,2*3.14*r);
	return 0;
}
