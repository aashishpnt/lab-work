#include<stdio.h>
void main()
{
    int i,j;
    for(i=6;i>=1;i--){
        for(j=1;j<=i;j++)
        {
            printf("%c",64+j);
        }
        printf("\n");

    }
}
