#include <stdio.h>

int main() {
    int i,m;
    float sum=0.0;
    printf("enter the number you want the series till\n");
    scanf("%d",&m);
    for(i=1;i<=m;i++){
        sum+=1.0/i;
    }
    printf("The sum of the series is %f",sum);
    return 0;
}