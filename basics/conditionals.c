#include <stdio.h>

int multiply(int x, int y);

int add(int x, int y);

int divide(int x, int y);

int main(){
    int num = 4;
    int num2 = 8;
    int num3 = 12;
    int num4 = 68;

    if(multiply(num, num3) % 2 == 0){
        printf("%d %s %d %s\n", num, "and", num2, "multiplied is even.");
    } else {
        printf("%d %s %d %s\n", num, "and", num2, "multiplied is odd.");
    }

    int added = add(num2, num3);
    int divided = divide(num4, num3);

    if(added > divided){
        printf("%d %s %d\n", added, "is greater than", divided);
    } else if (added == divided){
        printf("%d %s %d %s\n", divided, "and", added, "are equal");
    } else {
         printf("%d %s %d\n", divided, "is greater than", added);
    }

    int switchMe = add(num, num2);

    switch(switchMe){
        case(12): {
            printf("%d %s", switchMe, "equals 12");
            break;
        }
        case(16): {
            printf("%d %s", switchMe, "equals 16");
            break;
        }
        case(20): {
            printf("%d %s", switchMe, "equals 20");
            break;
        }
        case(22): {
            printf("%d %s", switchMe, "equals 22");
            break;
        }
        case(25): {
            printf("%d %s", switchMe, "equals 25");
            break;
        }
    }


}

int multiply(int x, int y){
    return x * y;
}

int add(int x, int y){
    return x + y;
}

int divide(int x, int y){
    return x / y;
}