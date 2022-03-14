#include <stdio.h>
#include <stdlib.h>

void print_bits(unsigned long x);
void print_bin(unsigned int x);
void isOddOrEven(int num);
void countOnesAndZeros();
int countOnes(unsigned int value);
int countZeros(unsigned int value);

int main()
{
    int x = 423, y = 22;
    printf("Initial number before shifting right 1 bit: %d\n", x);
    x = x << 4; // shift 1 bit right
    printf("Number after shifting right 1 bit: %d\n", x);
    print_bits(y);
    print_bin(0);
    print_bin(1);
    print_bin(2);
    print_bin(43);
    print_bin(123456789);
    isOddOrEven(22);
    isOddOrEven(13);
    countOnesAndZeros();
}

void print_bin(unsigned int x)
{
    int i;
    int iters = 0;
    for (i = 8 * sizeof(x) - 1; i >= 0; i--)
    {
        if(x & (1 << i)){
            putchar('1'); 
        } else {
            putchar('0');
    }
        if(iters == 7 || iters == 15 || iters == 24 ){
            putchar('.');
        }
        iters++;
    }
    printf("\n");
}


void print_bits(unsigned long x)
{
    int i;
    int ones = 0;
    int zeros = 0;
    for (i = 8 * sizeof(x) - 1; i >= 0; i--)
    {
        if(x & (1 << i)){
            ones++;
            putchar('1'); 
        } else {
            putchar('0');
            zeros++;
    }
    }
    printf("\n");
    printf("Ones: %d | Zeros: %d\n", ones, zeros);
}

void countOnesAndZeros()
{
    int num = 12;
    printf("%s", "Input number: ");
    scanf("%d", &num);
    int ones = countOnes(num);
    int zeros = 0;
    //  int zeros = countZeros(num);
    printf("\nNumber: %d \nNumber of ones: %d \nNumber of zeros: %d \n", num, ones, zeros);
}

int countOnes(unsigned int value)
{
    int count;
    for (count = 0; value != 0; count++, value &= value - 1)
        ;
    return count;
}


void isOddOrEven(int num)
{
    if (num & 1)
    {
        printf("%d: Number is odd\n", num);
    }
    else
    {
        printf("%d: Number is even\n", num);
    }
}