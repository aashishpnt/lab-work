#include<stdio.h>
void main(){
int i,a,b,c;
b=1;
a=0;
c=1;

while(b<=300){
    printf("%d,",b);
 b=a+c;
 a=c;
 c=b;
}
}
