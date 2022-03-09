#include <stdio.h>

int sum(int x, int y);

int main()
{
    int num = sum(34, 67);
    printf("%d", num);
    return 0;
}

int sum(int x, int y){
    return x + y;
}