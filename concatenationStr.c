#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *string_append(char *s1, char *s2);

int main(void)
{
    char first[20] = "First ";
    char second[10] = "Second";

    strcat(first, second);
    printf("first: %s\n", first);

    char s1[] = "abc";
    char s2[] = "wxyz";

    char *s = string_append(s1, s2);
    printf("s: %s\n", s);
    return 0;
}

char *string_append(char *s1, char *s2)
{
    int len_s1 = strlen(s1);
    int len_s2 = strlen(s2);
    int size = len_s1 + len_s2 + 1;
    char *s = calloc(size, sizeof(char));

    for(int i = 0; i < len_s1; i++)
        s[i] = s1[i]; 
    for(int i = 0; i < len_s2; i++)
        s[len_s1 + i] = s2[i];
    s[size - 1] = '\0';

    return s;
}