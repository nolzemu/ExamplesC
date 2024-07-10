#include <stdio.h>

void reverse(int array[], int length);

int main(void)
{
    int myarray1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int myarray2[] = {6, 5, 4, 3, 2, 1};
    int myarray3[] = {7, 6, 5, 4, 3, 2, 1};

    size_t array_size1 = sizeof(myarray1) / sizeof(myarray1[0]);
    size_t array_size2 = sizeof(myarray2) / sizeof(myarray2[0]);
    size_t array_size3 = sizeof(myarray3) / sizeof(myarray3[0]);

    reverse(myarray1, array_size1);
    reverse(myarray2, array_size2);
    reverse(myarray3, array_size3);

    for(int i = 0; i < 9; i++)
    {
        printf("myarray1[%d] = %d\n", i, myarray1[i]);
    }

    printf("\n\n");

    for(int i = 0; i < 6; i++)
    {
        printf("myarray2[%d] = %d\n", i, myarray2[i]);
    }
    
    printf("\n\n");

    for(int i = 0; i < 7; i++)
    {
        printf("myarray3[%d] = %d\n", i, myarray3[i]);
    }
    return 0;
}

void reverse(int array[], int length)
{
    int temp = 0;
    if(length / 2 == 0)
    {
        for(int i = 0; i < length; i++)
        {
            temp = array[i];
            array[i] = array[length - i - 1];
            array[length - i - 1] = temp;
        }
    }
    else 
    {
        for(int i = 0; i < (length / 2); i++)
        {
            temp = array[i];
            array[i] = array[length - i - 1];
            array[length - i - 1] = temp;
        }
    }
}