#include<stdio.h>
#include<math.h>
int func(int a)
{
    int lhs,rhs,count=0,x;
    for(x=0;x<=(pow(2,a)-1);x++)
        {
            lhs= (x)^(x+1);
            rhs=(x+2)^(x+3);
            if(lhs==rhs)
            {
                count++;
            }
        }
        return count;
}
int main()
{
    int t,i;
    scanf("%d",&t);
    int arr[t];
    for(i=0;i<t;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<t;i++)
    {
        printf("%d\n",func(arr[i]));
    }
    return 0;
}
