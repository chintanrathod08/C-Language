#include <stdio.h>

int main(){
    
    int c,ans=1;
    
    printf("Enter any value : ");
    scanf("%d",&c);
    
    for(int i = 1; i<=c ; i++)
    {
        ans = ans*i;    
    }
        printf("%d",ans);
}