#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
          FILE *fpin,*fpout;
          char str[20];
          fpin=fopen("roll40_input.txt","r");
          if(fpin==NULL){
                    printf("ERROR!");
                    exit(1);
          }
          fpout=fopen("roll40_output.txt","w");
           if(fpin==NULL){
                    printf("ERROR!");
                    exit(1);
          }
          fscanf(fpin,"%s",str);
          fprintf(fpout,"%s",str);
          fclose(fpin);
          fclose(fpout);
          printf("File copied successfully.");

          return 0;
}
