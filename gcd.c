#include <stdio.h>

int main() {
    int a,b,remainder,dividend,divisor;
    printf("Enter the numbers you want gcd of \n");
    scanf("%d%d",&a,&b);
    if(a>b){
        dividend=a;
        divisor=b;
    }
    else{
        dividend=b;
        divisor=a;
    }
    while(divisor){
        remainder=dividend%divisor;
        dividend=divisor;
        divisor=remainder;
    }
    printf("The GCD of %d and %d is = %d",a,b,divisor);
    }
    return 0;
}