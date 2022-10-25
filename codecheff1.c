#include <stdio.h>

int main(void) {
	int n;
	scanf("%d",&n);
	int a;
	for(a=1;a<=n;a++){
	    int b=0;
	    scanf("%d",&b);
	    int sum=0;
	    for(b=b;b>0;b=b/10){
	        
	        sum=sum+b%10;
	    }
	    printf("%d\n",sum);
	}
	return 0;
}
