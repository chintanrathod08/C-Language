#include <stdio.h>

int main()
{
    for (int row = 1; row <= 5; row++)
    {
        for (int col = 1; col <= row; col++)
        {
            printf("%d ",col);
        }
        printf("\n");
        
    }
    
}

//1 
//1 2
//1 2 3
//1 2 3 4
//1 2 3 4 5