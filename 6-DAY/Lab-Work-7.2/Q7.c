// 1 2 3 4 5 5 4 3 2 1 
// 1 2 3 4 * * 4 3 2 1 
// 1 2 3 * * * * 3 2 1 
// 1 2 * * * * * * 2 1 
// 1 * * * * * * * * 1 

#include <stdio.h>

int main()
{   

    int c;

    for (int row = 5; row >=1 ; row--)
    {
        for (int col = 1; col <= row ; col++)
        {
            printf("%d ",col);
        }

        
        for (int space = (5 - row) *2 ;  space>=1 ; space--)
        {
            printf("* ");
        }
        

        for (int col = row; col >= 1 ; col--)
        {
            printf("%d ",col);
        }

        printf("\n");
    }

    
    
}