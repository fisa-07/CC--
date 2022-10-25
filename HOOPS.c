#include <stdio.h>
int main(){
    int t,i,j;
    scanf("%d",&t);
    int a[t];
    for(i=0;i<t;i++){
        scanf("%d",&a[i]);
    }
    j=i;
    for(i=0;i<t;i++){
        printf("%d\n",(a[i]+1)/2);
    }
    return 0;
}


