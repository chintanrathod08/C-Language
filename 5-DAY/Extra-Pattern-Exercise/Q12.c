#include <stdio.h>

int main()
{

    for (int  row = 1; row <= 5 ; row++)
    {
        for (int col = 5; col >= row; col--)
        {
            printf("%d ",col);
        }
        printf("\n");
        
    }
    

}
// 5 4 3 2 1 
// 5 4 3 2 
// 5 4 3 
// 5 4 
// 5 