#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>

int sum(int x, int y);

int charDist(char a, char b);

int countConsonants(char word[]);
int countVowels(char *word);

int sum(int x, int y)
{
    return x + y;
}

int charDist(char a, char b)
{
    return fmax(a, b) - fmin(a, b);
}

int countVowels(char *word)
{
    int vowelCount = 0;
    for (int i = 0; i < strlen(word); i++)
    {
        char letter = word[i];
        if (isupper(letter))
        {
            letter = tolower(letter);
        }
        if (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u')
        {
            vowelCount++;
        }
    }
    return vowelCount;
}

int countConsonants(char word[])
{
    int consonantCount = 0;

    for (int i = 0; i < strlen(word); i++)
    {
        char letter = word[i];
        if (isupper(letter))
        {
            letter = tolower(letter);
        }
        if (letter != 'a' && letter != 'e' && letter != 'i' && letter != 'o' && letter != 'u' && letter != '\n')
        {
            consonantCount++;
        }
    }

    return consonantCount;
}