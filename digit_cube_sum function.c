#include<stdio.h>
int digit_cube_sum(int a);
int div(int digit_cube_sum()){
	return digit_cube_sum()/100;
}
int main()
{
	int  n,s;
	printf("Enter Number:");
	scanf("%d",&n);
	s=digit_cube_sum(n);
	printf("%d",s);
	div(digit_cube_sum);
	return 0;
}
int digit_cube_sum(int a)
{
	int sum=0,rem;
	for(a=a;a<0;a/10){
		rem=a%10;
		sum=sum+(rem*rem*rem);
	}
	return sum;
}

