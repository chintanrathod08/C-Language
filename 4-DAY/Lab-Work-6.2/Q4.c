#include <stdio.h>

int main(){

    int first  = -1;
    int second = 1;
    int temp;
    int ans;
    
    printf("Enter any Number : ");
    scanf("%d",&ans);

    for (int i = 1; i <= ans; i++)
    {

        temp = first+second; // -1 + 1 = 0
        printf("%d,",temp); // 0
        first = second;//1
        second = temp;//0
        
    }
    
    

} 