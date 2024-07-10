#include <stdio.h>

int fib(int n);

int main(void)
{
    int term1 = 0;
    int term2 = 1;
    int fibn = 0;
    int length = 0;

    do 
    {
        printf("Enter sequence length: ");
        scanf("%d", &length);
        if(length < 3)
            printf("Length must be >= 3\n");
    } while(length < 3);

    printf("\nIterative solution\n");
    printf("%d,%d,", term1, term2);

    for(int i = 2; i < length; i++) // loop we know the first 2 num ** term1 & term2
    {
        fibn = term1 + term2;
        printf("%d", fibn);
        
        term1 = term2;
        term2 = fibn;

        if(i != (length - 1)) printf(",");
        else printf("\n");  
    }

    printf("\nRecursive solution\n");
    for(int i = 0; i < length; i++)
    {
        printf("%d", fib(i));
        if(i != (length - 1)) printf(",");
        else printf("\n");  
    }
    return 0;
}

int fib(int n) 
{
    if(n > 1) return fib(n-1) + fib(n-2); // recursive step
    else if(n == 1) return 1;
    else if(n == 0) return 0;
    else
    {
        printf("Error: n must be >= 0");
        return -1;
    }
}