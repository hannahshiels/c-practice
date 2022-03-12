#include <stdio.h>

typedef struct Book {
    char name[20];
    char releaseYear[5];
    char author[20];
    int id;
} Book;

int main(){
    struct Book book = {"Nice Book", "1905", "Hannah", 16};
    printf("Book name: %s | Release Year: %s | Author: %s | ID: %d", book.name, book.releaseYear, book.author, book.id);

}