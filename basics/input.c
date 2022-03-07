#include <stdio.h>
#include "utils.h"

void inputNumbers();
void inputChar();
void inputString();

int main(int argc, char *argv[])
{
    if (argc == 1)
    {
        printf("%s\n", "Enter program arguments.");
        return 1;
    }
    if (argc > 2)
    {
        printf("%s\n", "This program only supports 1 program argument");
        return 1;
    }

   // printf("%s %s %s\n", "Hello", argv[1], "enter two numbers to add.");
   // inputNumbers();
   // printf("%s\n", "Enter two chars to compare distance apart.");
    // inputChars();
    printf("%s\n", "Enter a string to its count vowels and consonants.");
    inputString();
    return 0;
}

void inputNumbers()
{
    printf("%s: ", "First number");
    int num = 0;
    scanf("%d", &num);
    printf("%s: ", "Second number");
    int num2 = 0;
    scanf("%d", &num2);
    int total = sum(num, num2);
    printf("%s: %d\n", "The sum is", total);
}

void inputChars()
{
    printf("%s: ", "First char");
    char a;
    a = getchar();
    getchar();
    printf("%s: ", "Second char");
    char b;
    b = getchar();
    int dist = charDist(a, b);
    printf("\n%s: %d\n", "The distance is", dist);
}

void inputString(){
    printf("%s: ", "String");
    char word[] ="";
    scanf("%s", word);
    int vowels = countVowels(word);
    int cons = countConsonants(word);
    printf("\n%s: %d. %s: %d\n", "Number of vowels", vowels, "Number of consonants", cons);
}


