#include <stdio.h>
void print_bits(unsigned long x);

int main(){
    int x = 423, y = 22;
    printf("Initial number before shifting right 1 bit: %d\n", x);
    x = x << 4; // shift 1 bit right
    printf("Number after shifting right 1 bit: %d\n", x);
    print_bits(y);
}

void print_bits(unsigned long x)
{
    int i;
    for(i=sizeof(x)-1; i>=0; i--) {
        (x & (1 << i)) ? putchar('1') : putchar('0');
    }
    printf("\n");
}