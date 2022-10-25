#include<stdio.h>
#include<math.h>
int main()
{
    int t,i,x,count=0,rhs,lhs;
    scanf("%d",&t);
    int arr[t];
    for(i=0;i<t;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<t;i++)
    {
        for(x=0;x<=(pow(2,arr[i])-1);x++)
        {
            lhs= (x)^(x+1);
            rhs=(x+2)^(x+3);
            if(lhs==rhs)
            {
                count++;
            }
        }
        printf("%d\n",count);
        count=0;
    }
    return 0;
}
