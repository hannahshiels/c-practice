#include <stdio.h>
#include <string.h>

void getWords();
int compareWords(char word[], char word2[]);

int main(void){
    getWords();
}

void getWords(){
    char word[20] = "";
    printf("Input a first word: ");
    scanf("%s", word);
    char word2[20] = "";
    printf("Input a second word: ");
    scanf("%s", word2);
    int compared = compareWords(word, word2);
    if(compared == 0){
        printf("\n%s and %s are anagrams. \n", word, word2);
    } else {
        printf("\n%s and %s are not anagrams. \n", word, word2);
    }
}

int compareWords(char word[], char word2[]){
    if(strlen(word) != strlen(word2)){
        return 1;
    }
    int exists = 0;
    for(int i = 0; i <=  strlen(word)-1; i++){
        for(int j = 0; j < strlen(word)-1; j++){
            if(word[i] == word2[j]){
                exists++;
            }
        }
    }
    if(exists != (strlen(word)-1)){
        return 1;
    }
    return 0;
}