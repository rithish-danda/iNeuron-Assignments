// a06 03
#include<stdio.h>
int main()
{
    int i,n,sum=0,x=1;
    printf("Input the value of n: ");
    scanf("%d",&n);
    for(i=1;x<=n;i++)
    {
        if(i%2!=0)
        {
            sum+=i;
            x++;
        }
    }
    printf("The sum of first %d odd natural numbers is %d",n,sum);
    return 0;
}
