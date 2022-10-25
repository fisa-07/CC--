#include<stdio.h>

int main()
{
    char str[100], rev[100];
    int i=-1,j=0,c=0;
    printf("Enter a string : ");
    gets(str);
    printf("String before reversing : %s\n", str);

    while(str[++i]!='\0'); // store length of str in i

    // copy the string
    while(i>=0)
    {
        rev[j++]=str[--i];
    }
    rev[j++]='\0';
    
    puts(rev);
    
    return 0;
}
