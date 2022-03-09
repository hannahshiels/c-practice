#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char *add(char *word, char *word2);
int isPalindrome(char *word);
void printResult(int result);

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

    char *randomWord = "banana";
    printf("%s %s %s? ", "Is", randomWord, "a palindrome" );
    int result = isPalindrome(randomWord);
    printResult(result);
    char *randomWord2 = "abba";
    printf("%s %s %s? ", "Is", randomWord2, "a palindrome" );
    result = isPalindrome(randomWord2);
    printResult(result);
    return 0;
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

void printResult(int result){
    if(result == 0){
        printf("%s\n", "Yes, it is." );
    } else {
        printf("%s\n", "No, it isn't." );
    }
}

int isPalindrome(char *word){
    int count = 0;

    for(int i = strlen(word)-1; i >= 0; i--){
        if(word[i] != word[count]){
            return 1;
        }
        count++;
    }
    return 0;
}