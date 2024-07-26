// [6] define roots a quadratic equation
#include<stdio.h>
#include<math.h>
int main(){
    float a,b,c,d,r1,r2;
    printf("enter non zero coffient : ");
    scanf("%f%f%f",&a,&b,&c);
    d=(b*b)-4*a*c;
    if(d==0){
        r1=r2=(-b)/2*a;
        printf("root are equal");
        printf("root1=%f\n  and root2=%f\n",r1,r2);
    }
    else if (d>0){
        r1=(-b+sqrt(d))/(2*a);
        r2=(-b-sqrt(d))/(2*a);
        printf("roots are real and distinct");
        printf("root1=%f\n",r1);
        printf("root2=%f\n",r2);
    }else {
        r1=(-b)/(2*a);
        r2=sqrt(fabs(d))/(2*a);
        printf("roots are complex/n");
        printf("root1=%f+i%f\n", r1,r2);
        printf("root2=%f-i%f\n", r1,r2);

    }
}
