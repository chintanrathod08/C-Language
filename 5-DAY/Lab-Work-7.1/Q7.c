// A 
// B A 
// C B A 
// D C B A 
// E D C B A 

#include <stdio.h>

int main()
{
    for (int row = 'A' ; row <= 'E'; row++)
    {
          for (int col = row; col >= 'A' ; col--)
          {
             printf("%c ",col);
          }
            
           printf("\n"); 
    }
    
}