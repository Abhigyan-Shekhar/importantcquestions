#include<stdio.h>
int main(){
    const float PI=3.14;
    float r,a;
    printf("Enter the radius\n");
    scanf("%f",&r);
    a=PI*r*r;
    printf("The area of the circle is %f m^2",a);
}