#include <stdio.h>

int main() {
    int year;
    printf("enter the year to check\n");
    scanf("%d",&year);
    if((year%4==0&&year%100!=0)||(year%400==0)){
        printf("It's leap year");
    }
    else{
        printf("It's not leap year");
    }
    return 0;
}