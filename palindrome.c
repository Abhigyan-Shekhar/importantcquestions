#include <stdio.h>

int main() {
    int n,number,reverse=0;
    printf("enter a number which is not zero\n");
    scanf("%d",&n);
    number=n;
    while(n!=0){
        reverse=(reverse*10)+(n%10);
        n/=10;
    }
    if(reverse==n){
        printf("%d is palindrome",n);
    }
    else{
        printf("It's not palindrome");
    }
    return 0;
    }