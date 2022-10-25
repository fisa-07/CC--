#include <stdio.h>
struct complex
{
    float real;
    float imag;
};
struct complex add(struct complex n1,struct complex n2)
{
    struct complex temp;
    temp.real=n1.real+n2.real;
    temp.imag=n1.imag+n2.imag;
    return(temp);
}

int main() {
    struct complex n1,n2,result;

    printf("Enter 1st complex number (a + bi) : ");
    scanf("%f %f",&n1.real,&n1.imag);
    printf("Enter 2nd complex number (a + bi) : ");
    scanf("%f %f",&n2.real,&n2.imag);

    result=add(n1,n2);

    printf("\nSum = %.2f + %.2fi\n",result.real,result.imag);
    return 0;
}
