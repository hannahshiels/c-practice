#include <stdio.h>

void changeVal(int *x){
    *x = 2;
}

int main(){
    int x = 12;
    int *y =&x;
    printf("%d\n", *y);
    changeVal(y);
    printf("%d\n", *y);
    return 0;
}