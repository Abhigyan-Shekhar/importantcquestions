#include <stdio.h>
#include<math.h>
int main() {
    float a,b,c,d,r1,r2;

    printf("Enter the coeffiecients\n");
    scanf("%f%f%f",&a,&b,&c);
    if(a==0||b==0||c==0){
        printf("Invalid inputs\n");
    }
    else{
        d=(b*b)-(4*a*c);
        if (d>0){
            printf("Roots are real and distinct\n");
            r1=(-b+sqrt(d))/(2*a);
            r2=(-b-sqrt(d))/(2*a);
            printf("The roots are %f and %f\n",r1,r2);
        }
        else if(d<0){
            printf("Roots are real and imaginary\n");
            r1=-b/(2*a);
            r2=sqrt(fabs(d))/(2*a);
            printf("The roots are %f + i%f\n%f-i%f",r1,r2,r1,r2);
        }
        else{
            printf("The roots are real and equal\n");
            r1=r2=-b/2*a;
            printf("The roots are %f and %f",r1,r2);
        }
    }
    
}