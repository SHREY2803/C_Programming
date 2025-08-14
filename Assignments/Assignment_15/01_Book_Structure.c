#include <stdio.h>
#include <string.h>

typedef struct Book
{
    char bname[50];
    int id;
    char author[50];
    int price;
} Book;

void storeBook(Book *bs)
{
    printf("Enter the name of the book: ");
    fgets(bs->bname, sizeof(bs->bname), stdin);
    bs->bname[strcspn(bs->bname, "\n")] = '\0'; // remove newline

    printf("Enter book id: ");
    scanf("%d", &bs->id);
    getchar(); // remove leftover newline from buffer

    printf("Enter author: ");
    fgets(bs->author, sizeof(bs->author), stdin);
    bs->author[strcspn(bs->author, "\n")] = '\0'; // remove newline

    printf("Enter price: ");
    scanf("%d", &bs->price);
    getchar(); // remove leftover newline
    printf("\n");
}

void displayBook(Book *bs)
{
    printf("Book Name: %s, Book-ID: %d, Author of the Book: %s, Price of the book: %d\n", bs->bname, bs->id, bs->author, bs->price);
}
int main()
{
    Book b1, b2;
    storeBook(&b1);
    storeBook(&b2);

    displayBook(&b1);
    displayBook(&b2);

    return 0;
}