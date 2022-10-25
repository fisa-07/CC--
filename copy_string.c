#include<stdio.h>

void copyStr(char str1[], char str2[], int index){
      str2[index] = str1[index];

      if(str1[index]=='\0'){
          return;
      }

      copyStr(str1,str2,index+1);
}
int main()
{
    char str1[100],str2[100];

    printf("Enter string : ");
    gets(str1);
    str2[100] = "";

    copyStr(str1, str2, 0);

    printf("Copy of str1 into str2 is : %s\n", str2);

    return 0;
}
