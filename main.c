#include <stdio.h>
#include <stdlib.h>


int factorial(n){
    if(n==0 || n==1)
        return 1;
    else
        return n*factorial(n-1);
}
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Factorial of %d is: ", n);
    for(int i=n; i>=1; i--){
        printf("%d", i);
        if(i>=2)
            printf("X");
        }
    int result=factorial(n);
    printf(" = %d\n", result);
    return ;
}

