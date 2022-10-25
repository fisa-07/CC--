#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	int i,count=0;
	char c;
    FILE *fp;
	fp=fopen("asif.txt","r");
	if(fp==NULL){
		printf("error");
		exit(1);
    }
    while ((c=fgetc(fp))!=EOF)
    {
        if (c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
        {
            count++;
        }
        printf("%c",c);
    }
    printf("\nNo of vowels:%d",count);
    fclose(fp);
    return 0;

}
