#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1,n2,sum=0;
    printf("Input Smallest Number\n");
    scanf("%d",&n1);
    printf("Input Largest Number\n");
    scanf("%d",&n2);
    while (n1!=n2)
    {
        if (n1%2!=0)
        {
            sum=sum+n1;
        }
        n1++;
    }
    printf("The sum is %d",sum);
    return 0;
}
