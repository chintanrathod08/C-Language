#include <stdio.h>

int main(){

    int start ;
    int end = 1;

    printf("Enater any number : ");
    scanf("%d",&start);

    while (start >= end)

    {
       if ( start%2 != 0)
       {
         printf("%d \n",start);
       }
         
        start--;

    }
    

}