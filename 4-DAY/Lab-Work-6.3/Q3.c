#include <stdio.h>

int main(){

    int a;

    printf("Enter Any Table No : ");
    scanf("%d",&a);

    for (int i = 1; i <= 10; i++)
    {
        printf("%d * %d = %d \n",a,i,a*i);
    }
    


}