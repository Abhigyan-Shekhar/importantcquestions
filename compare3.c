#include <stdio.h>

int main() {
    // Your code starts here
    int a,b,c,lowest;
    printf("enter three numbers\n");
    scanf("%d%d%d",&a,&b,&c);
    lowest=(a<b && a<c)?a:(b<c)?b:c;
    printf("The lowest number is %d",lowest);
    return 0;
}