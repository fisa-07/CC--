#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i,size;
	char arr[50];
    for(i=0;i<5;i++){
        scanf("%c",&arr[i]);
    }
    size=sizeof(arr[50])/sizeof(arr[0]);
    for(i=0;i<5;i++){
        if(i%2==0){
            printf("%c",arr[i]);
        }
    }
    printf("\t");
    for(i=0;i<5;i++){
        if(i%2!=0){
            printf("%c",arr[i]);
        }
    }
    return 0;
}

