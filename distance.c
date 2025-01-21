#include <stdio.h>
#include<math.h>
int main() {
    int x1,x2,y1,y2;
    float dist;
    printf("Enter coordinates of 1st point\n");
    scanf("%d%d",&x1,&y1);
    printf("Enter coordinates of 2nd point\n");
    scanf("%d%d",&x2,&y2);
    dist=sqrt(pow(x2-x1,2) + pow(y2-y1,2));
    printf("The distance between 2 points is : %f\n",dist);
    return 0;
}