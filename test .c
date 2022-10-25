#include<stdio.h>
#include<math.h>
int main()
{
	int count=0,x;
	scanf("%d",&x); 
	if((x)^(x+1)==(x+2)^(x+3))
    {
        count++;
    }
    printf("%d",count);
    return 0;
            
}
