#include <stdio.h>

int main(void) {
	int i,n,t;
	scanf("%d",&n);
	int arrn[n],arrf[n];
	for(i=0;i<n;i++){
	    scanf("%d",&arrn[i]);
	}
	for(i=0;i<n;i++){
	    arrf[i]=1;
	    for(t=1;t<=arrn[i];t++){
	        arrf[i]=arrf[i]*t;
	    }
	    if(arrn[i]!=0)
	    printf("\n%d",arrf[i]);
	    else
	    printf("\n%d",arrn[i]);
	}
	return 0;
}

