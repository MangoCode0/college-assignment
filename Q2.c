// [2] check whether a num is odd or even by using ternary opp.
#include<stdio.h>
int main(){
    int n;
    printf("enter a number: ");
    scanf("%d",&n);
    (n % 2 == 0) ? printf("%d is even.\n", n) : printf("%d is odd.\n", n);
    
    return 0;
}