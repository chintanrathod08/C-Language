#include <stdio.h>

int main(){

    int A,B,C;

    printf("Enter a value of A : ");
    scanf("%d",&A);

    printf("Enter a Value of B : ");
    scanf("%d",&B);

    printf("Enter a Value of C : ");
    scanf("%d",&C);
    
    (A < B && A < C) ? printf("A is min : %d",A) : (B < C) ? printf("B is min : %d",B) : printf("C is min : %d",C);
    
    

}