#include <stdio.h>

int main()
{
    int start;

    printf("Enter any number : ");
    scanf("%d",&start);

    do
    {
       if (start%2 == 0)
       {
          printf("%d \n",start);
        }
        start--;
    } while (start >=1 );
    
}