// [1]To check whether a num is odd or even
//New comment
#include<stdio.h>
int main(){
    int n;
    printf("enter a number: ");
    scanf("%d",&n);

    if(n%2==0){
        printf("this number is even\n");
    }else{
        printf("this number is odd\n");
    }
    return 0;
}