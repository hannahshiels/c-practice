#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    char *name = "";
    if(argc == 1)
    {
        printf("%s", "You must enter your name as a program argument to use this program.");
        return 1;
    }
    name = argv[1];
    printf("%s %s", "My name is", name);
    if(argc == 3)
    {
        int age = atoi(argv[2]);
        printf("%s %d.", " and my age is", age);
    }
    return 0;
}