#include <stdio.h>
#include <math.h>

int sum(int x, int y);

int charDist(char a, char b);

int sum(int x, int y){
    return x + y;
}

int charDist(char a, char b){
    return fmax(a,b) - fmin(a,b);
}