#include<stdio.h>
#include<math.h>
void main()
{
float n=1,k=1,i;
 for (i=1;i<=10;i++)
 {
     n=n+(pow(i,2)/k);
     k=k*(i+1);

 }
printf("%.1f",n);

}
