#include <stdio.h>

int main() {
    int n,reverse=0;
    printf("enter a number which is not zero\n");
    scanf("%d",&n);
    while(n!=0){
        reverse=(reverse*10)+(n%10);
        n/=10;
    }
    printf("Reverse of the number is %d",reverse);
}