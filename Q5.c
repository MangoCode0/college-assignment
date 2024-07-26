 // [5] find the largest number among three number by using ternary oprrator
#include<stdio.h>
int main(){
     int a,b,c,t;
     printf("enter three no.:");
     scanf("%d,%d,%d",&a,&b,&c);
     t = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
    
    printf("largest number is %d\n",t);

}
