#include<stdio.h>
int vowelno(char *str)
{
    int count=0;

    while((*str)!='\0'){
        if(*str=='a'|| *str=='e'||*str== 'i'||*str=='o'||*str=='u'||*str=='A'||*str=='E'||*str=='I'||*str=='O'||*str=='U'){
            count++;
        }
        str++;
    }
    return count;
}

int main()
{
    char str[50];
    fflush(stdin);
    printf("Enter string : ");
    gets(str);

    printf("No of Vowels = %d\n",vowelno(str));

    return 0;
}
