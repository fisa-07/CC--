#include<stdio.h>
#include<stdlib.h>
int main()
{
          FILE *fp;
          char ch;
          fp=fopen("savecurrentfie.c","r");
          if(fp==NULL){
                    printf("ERROR");
                    exit(1);
          }
          while(1){
                    ch=fgetc(fp);
                    if(ch==EOF){
                              break;
                    }
                    printf("%c",ch);
          }
          fclose(fp);
          return 0;
}
