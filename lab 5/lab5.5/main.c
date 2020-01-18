#include<stdio.h>
#include<math.h>
void main()
{
    int x,n,y=0,i;
    printf("Enter value of x:");
    scanf("%d",&x);
    printf("Enter value of n:");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        y=y+pow(x,i);
    }
    printf("sum of series is %d",y);

}

