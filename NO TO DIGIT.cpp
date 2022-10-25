#include<stdio.h>
int main()
{
	int n,i,ld,rev1=0;
	printf("Enter number ");
	scanf("%d",&n);
	for(n=n;n!=0;n=n/10)
	{
		ld=n%10;
		rev1=10*rev1+ld;
	}
	for(rev1=rev1;rev1!=0;rev1=rev1/10)
	{
		ld=rev1%10;
		switch(ld)
		{
			case 1:
				printf("one\t");
				break;
			case 2:
			    printf("Two\t");
				break;
			case 3:
			    printf("Three\t");
				break;
			case 4:
			    printf("Four\t");
				break;
			case 5:
				printf("Five\t");
			    break;
			case 6:
			    printf("Six\t");
				break;
			case 7:
			    printf("Seven\t");
				break;
			case 8:
				printf("Eight\t");
				break;
			case 9:
				printf("Nine\t");
				break;
			case 0:
				printf("Zero\t");
				break;					
		}
		
	}
	return 0;
	
	
}
