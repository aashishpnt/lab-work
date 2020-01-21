#include <stdio.h>

int add(int,int);
int sub(int,int);
int mults(int,int);
float divide(int,int);

void main()
{
    int num1,num2,sum,difference,product;
    float division;
    printf("enter any two numbers\n");
    scanf("%d%d",&num1,&num2);
    sum= add(num1,num2);
    difference= sub(num1,num2);
    product= mults(num1,num2);
    division= divide(num1,num2);

    printf("the sum is %d\n",sum);
    printf("the difference is %d\n",difference);
    printf("the product is %d\n",product);
    printf("the division is %.2f\n",division);
}

int add(int a,int b)
 {
 return (a+b);
 }

int sub(int a,int b)
 {
 return (a-b);
 }

 int mults(int a,int b)
 {
     return (a*b);
 }

 float divide(int a,int b)
 {
     return(a/b);
 }
