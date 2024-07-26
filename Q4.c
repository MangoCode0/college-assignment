// [4] find the largest number among three number
#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter three no.:");
    scanf("%d,%d,%d",&a,&b,&c);
    if(a>b && a>c){
        printf("largest no. is %d\n",a);
    } else if(b>a && b>c){
        printf("largest no. is %d\n",b);
    } else {
        printf("largest no. is %d\n",c);
    }