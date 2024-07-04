#include <stdio.h>

int main()
{
    int c, sum=0;

    printf("Enter any Value : ");
    scanf("%d",&c);

    for (int i = 1; i <= c; i++)
    {
      sum = sum + i;
    }

    printf("%d",sum);
    
}