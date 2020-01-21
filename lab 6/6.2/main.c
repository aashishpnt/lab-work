//sum of first 50 natural number using recursive function.
#include <stdio.h>
int recursive()
{
    int i;
    for(i=1;i<=50;i++)
    {
        return (i+recursive());
    }
}

void main()
{
    int sum;
   sum=recursive();
   printf("the sum is %d",sum);
}
