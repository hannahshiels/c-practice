#include <stdio.h>
int addFraction(int a, int c, int b, int d);
int subFraction(int a, int c, int b, int d);
int mulFraction(int a, int c, int b, int d);

int main(){
    addFraction(1,5,5,5);
    subFraction(1,5,5,5);
    mulFraction(1,5,5,5);
    return 0;
}

int addFraction(int a, int c, int b, int d){
    int ad = a*d;
    int bc = b*c;
    int cd = c*d;
    printf("Adding fractions: %d / %d\n", (ad+bc), cd);
    return 1;
}

int subFraction(int a, int c, int b, int d){
    int ad = a*d;
    int bc = b*c;
    int cd = c*d;
    printf("Subtracting fractions: %d / %d\n", (ad-bc), cd);
    return 1;
}

int mulFraction(int a, int c, int b, int d){
    int ad = a*d;
    int bc = b*c;
    int cd = c*d;
    printf("Multiplying fractions: %d / %d\n", (ad*bc), cd);
    return 1;
}