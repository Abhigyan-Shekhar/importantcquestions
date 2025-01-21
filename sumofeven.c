#include <stdio.h>

int main() {
    // Your code starts here
    int m,n,i,sum=0;
    printf("Enter range\n");
    scanf("%d%d",&m,&n);
    for(i=m;i<=n;i++){
        if(i%2==0){
            sum+=i;
        }
    }
    printf("%d",sum);
    return 0;
}