#include <stdio.h>

int sum(int array[], int length);

int main(void)
{
    int array1[] = {1, 2, 6, 9, 8, 7, 6, 5};
    int array2[] = {100};
    int array3[] = {99, 99};
    int array4[] = {50, -50, 100, -100, 200, -200};

    int len1 = sizeof(array1) / sizeof(array1[0]); 
    int len2 = sizeof(array2) / sizeof(array2[0]); 
    int len3 = sizeof(array3) / sizeof(array3[0]); 
    int len4 = sizeof(array4) / sizeof(array4[0]); 

    printf("Sum of array1: %d\n", sum(array1, len1));
    printf("Sum of array2: %d\n", sum(array2, len2));
    printf("Sum of array3: %d\n", sum(array3, len3));
    printf("Sum of array4: %d\n", sum(array4, len4));

    return 0;
}

int sum(int array[], int length)
{
    int sum = 0;
    for(int i = 0; i < length; i++)
        sum = sum + array[i];

    return sum;
}