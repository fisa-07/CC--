//a) Write a C program to Swap two nos’ without using the third variable using function.
#include<stdio.h>
void swap(int *x,int *y){
	(*x)=(*x)+(*y);
	(*y)=(*x)-(*y);
	(*x)=(*x)-(*y);

}
int main()
{
	int x,y;
	printf("Enter No:");
	scanf("%d%d",&x,&y);
	swap(&x,&y);
	printf("%d %d",x,y);
	return 0;
}
