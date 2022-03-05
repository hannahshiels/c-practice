#include <stdio.h>


int main()
{
    char letter = 'a';
    printf("%c\n", letter);
    char word[] = "hello";
    printf("%s\n", word);
    char *anotherWord = "goodbye";
    printf("%s\n", anotherWord);
    int num = 12;
    printf("%d\n", num);
    float decimals = 12.3;
    printf("%.1f\n", decimals);
    return 0;
}