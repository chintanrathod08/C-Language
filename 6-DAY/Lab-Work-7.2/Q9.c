// 1 2 3 4 5 
// 1 2 3 4
// 1 2 3
// 1 2
// 1
// 1 2
// 1 2 3
// 1 2 3 4
// 1 2 3 4 5

#include <stdio.h>

int main()
{
    for (int row = 5 ; row >= 1; row--)
    {
        for (int  col = 1; col <=row ; col++)
        {
            printf("%d ",col);
        }
        printf("\n");
    }

    
    

    for (int row = 2 ; row <= 5; row++)
    {
        for (int  col = 1; col <=row ; col++)
        {
            printf("%d ",col);
        }
        printf("\n");
    }
}