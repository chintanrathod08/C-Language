#include <stdio.h>

int main()
{
    for (int row = 5; row >= 1; row--)
    {
        for (int col = row ; col >= 1; col--)
        {
            printf("%d ",row);
        }
        printf("\n");
    }
    
}

// 5 5 5 5 5 
// 4 4 4 4 
// 3 3 3 
// 2 2
// 1