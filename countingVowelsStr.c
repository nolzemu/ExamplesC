#include <stdio.h>
#include <ctype.h>
#include <string.h>

int vowels_count(char *s);

int main(void)
{
    char s1[] = "It's a wonderful life";
    char s2[] = "Luke I am your Father!";
    char s3[] = "AaEeUu";

    int s1_count = vowels_count(s1);
    int s2_count = vowels_count(s2);
    int s3_count = vowels_count(s3);

    printf("s1 vowels count: %d\n", s1_count);
    printf("s2 vowels count: %d\n", s2_count);
    printf("s3 vowels count: %d\n", s3_count);

    return 0;
}

int vowels_count(char *s)
{
    int count = 0;
    int len_s = strlen(s);
    for(int i = 0; i < len_s; i++)
    {
        switch(toupper(s[i]))
        {
            case 'A':
                count++;
                break;
            case 'O':
                count++;
                break;
            case 'E':
                count++;
                break;
            case 'U':
                count++;
                break;
            case 'I':
                count++;
                break;
            case 'Y':
                count++;
                break;
        }
    }
    return count;
}