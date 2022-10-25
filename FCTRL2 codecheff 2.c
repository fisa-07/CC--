#include <stdio.h>

int main(void) {
	int arrn[10],arrf[10],i,n,t;
	scanf("%d",&n);
	for(i=0;i<n;i++){
	    scanf("%d",&arrn[i]);
	}
	for(i=0;1<n;i++){
	    arrf[i]=1;
	    for(t=1;t<=arrn[i];t++){
	        arrf[i]=arrf[i]*t;
	    }
	    printf("%d\n",arrf[i]);
	}
	return 0;
}

