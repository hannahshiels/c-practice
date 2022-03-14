#include <stdio.h>

int main()
{
 char c;
    int chars = 0;
    int words = 0;
    int lines = 0;
    while ((c = getchar()) != EOF)
    {
        chars++;
        if (c == ' ')
        {
            words++;
        }
        if (c == '\n')
        {
            lines++;
        }
        printf("Lines: %d | Words: %d | Chars: %d\n", lines, words, chars);
    }
    return 0;
}

