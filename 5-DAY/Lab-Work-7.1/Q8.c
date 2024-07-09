// 1 
// 2 3 
// 4 5 6 
// 7 8 9 10 
// 11 12 13 14 15 

#include<stdio.h>

int main()
{
    int a = 1;

    for (int row = 1; row <= 5; row++)
    {
        for (int col = row; col >= 1; col--)
        {
            printf("%d ",a);
            a++;
        }
        printf("\n");
        
    }
    
}