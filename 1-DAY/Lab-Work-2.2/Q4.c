#include <stdio.h>

int main(){

    int p,r,n,ans;

    printf("Enter Principal amout:  ");
    scanf("%d",&p);

    printf("Enter Rate :  ");
    scanf("%d",&r);

    printf("Enter Time :  ");
    scanf("%d",&n);

    ans=p*r*n/100;

    printf("Answer is :  %d",ans);
}