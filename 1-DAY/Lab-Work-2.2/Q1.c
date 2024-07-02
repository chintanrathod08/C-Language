#include <stdio.h>

int main(){
     
    float ans;
    int r;
    const float pi= 3.14;

    printf("Enter Radius :");
    scanf("%d",&r);

    ans=pi*r*r;

    printf("Answer is : %.2f",ans);
}