#include <stdio.h>

int main()
{
    for (int row = 5; row >= 1 ; row--)
    {
        for (int col = row; col >= 1; col--)
        {
            printf("%d ",col);
        }
        printf("\n");
    }
    
}

// 5 4 3 2 1
// 4 3 2 1
// 3 2 1
// 2 1 
// 1