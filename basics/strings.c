#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char *add(char *word, char *word2);

int main()
{
    char *word = "hello";
    char *word2 = "goodbye";
    if (strcmp(word, word2) == 0)
    {
        printf("%s\n", "Words match.");
    }
    else
    {
        printf("%s\n", "Words do not match");
    }

    char word3[] = "banana";
    char word4[] = "banana";
    if (strcmp(word3, word4) == 0)
    {
        printf("%s\n", "Words match.");
    }
    else
    {
        printf("%s\n", "Words do not match");
    }

    char *sentence = "I love ";
    char *sentence2 = "embedded systems";

    char *mixed = add(sentence, sentence2);
    printf("%s\n", mixed);
}

char *add(char *word, char *word2)
{
    char *fullSentence = malloc(sizeof(char*));
    char *ptr = fullSentence;
    for (int i = 0; i < strlen(word); i++)
    {
        *fullSentence = word[i];
        fullSentence++;
    }

    for (int i = 0; i < strlen(word2); i++)
    {
        *fullSentence = word2[i];
        fullSentence++;
    }
    return ptr;
}