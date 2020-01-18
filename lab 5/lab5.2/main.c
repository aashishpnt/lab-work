#include<stdio.h>
void main()
{
    int a,b,i,hcf,lcm;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);

    for (i=1 ;i<=a;i++)
    {
        if (a%i==0 && b%i==0)
        {
            hcf=i;
        }
    }
     lcm=a*b/hcf;
     printf("The HCF is %d \n",hcf);
     printf("The LCM is %d",lcm);

}
