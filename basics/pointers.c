#include <stdio.h>
#include <string.h>

void changeVal(int *x);
void changeString(char *str);

char arr[] = "Banana";


int main(){
    int x = 12;
    int *y =&x;
    printf("%d\n", *y);
    changeVal(y);
    printf("%d\n", *y);
    char *str = &arr[0];
    printf("%s\n", str);
    changeString(str);
    printf("%s\n", str);
    return 0;
}

void changeString(char *str){
    for(int i = 0; i < strlen(arr); i++){
        *str = '#';
        str++;
    }
    for(int i = 0; i < strlen(arr); i++){
        str--;
    }
}


void changeVal(int *x){
    *x = 2;
}