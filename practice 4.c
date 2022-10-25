#include<stdio.h>
int main()
{
	float cr,pr;
	printf("Input Current and Previous reading:");
	scanf("%f%f",&cr,&pr);
	printf("Amount to paid:Rs%f",(cr-pr)*3.75);
	return 0;
}
