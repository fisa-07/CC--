#include<stdio.h>
int main()
{
          int n;
          FILE *fp;
          char str[20];
          fp=fopen("file2.txt","w");
          printf("Enter Name of stutent:");
          gets(str);
          printf("Enter Roll:");
          scanf("%d",&n);
          fprintf(fp,"%s\t",str);
          fprintf(fp,"%d",n);
          fclose(fp);
          return 0;
}
