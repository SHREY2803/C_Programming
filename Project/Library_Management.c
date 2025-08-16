#include <stdio.h>
#include <string.h>

#define MAX_BOOKS 100
#define MAX_NAME 50
#define MAX_CATEGORY 50
#define MAX_AUTHOR 50

typedef struct Book
{
    int BookID;
    char Book_Name[MAX_NAME];
    char Author_Name[MAX_AUTHOR];
    char Category[MAX_CATEGORY];
    float Price;
    float Rating;

} Book;

Book library[MAX_BOOKS];
int Bookcount = 0;

void addBook()
{
    if (Bookcount >= MAX_BOOKS)
    {
        printf("Library is full!\n");
        return;
    }

    Book b;
    printf("Enter Book ID: ");
    scanf("%d", &b.BookID);
    getchar();

    printf("Enter Book Name: ");
    fgets(b.Book_Name, MAX_NAME, stdin);
    b.Book_Name[strcspn(b.Book_Name, "\n")] = 0;

    printf("Enter Author Name: ");
    fgets(b.Author_Name, MAX_AUTHOR, stdin);
    b.Author_Name[strcspn(b.Author_Name, "\n")] = 0;

    printf("Enter Category: ");
    fgets(b.Category, MAX_CATEGORY, stdin);
    b.Category[strcspn(b.Category, "\n")] = 0;

    printf("Enter Price: ");
    scanf("%f", &b.Price);

    printf("Enter Rating: ");
    scanf("%f", &b.Rating);

    library[Bookcount++] = b;
    printf("Book added successfully!\n");
}

void displayAllBooks()
{
    if (Bookcount == 0)
    {
        printf("No books in the library.\n");
        return;
    }

    for (int i = 0; i < Bookcount; i++)
    {
        printf("Book ID: %d | Book Name: %s | Book Author: %s | Category: %s | Price: %.2f | Rating: %.1f\n",
               library[i].BookID, library[i].Book_Name, library[i].Author_Name,
               library[i].Category, library[i].Price, library[i].Rating);
    }
}

void removeBook()
{
    int id, found = 0;
    printf("Enter Book ID to remove that book, from library: ");
    scanf("%d", &id);

    for (int i = 0; i < Bookcount; i++)
    {
        if (library[i].BookID == id)
        {
            found = 1;
            for (int j = i; j < Bookcount - 1; j++)
            {
                library[j] = library[j + 1];
            }
            Bookcount--;
            printf("Book removed successfully!\n");
            break;
        }
    }
    if (!found)
    {
        printf("Book not found\n");
    }
}

void searchBook()
{
    int choice;
    printf("Do you want to search by ID or want to search using name of book?\n");
    printf("Enter 1 for search by ID or 2 to search using the name of book\n");
    scanf("%d", &choice);
    getchar();

    if (choice == 1)
    {
        int id, found = 0;
        printf("Enter Book Id that you want to search: ");
        scanf("%d", &id);

        for (int i = 0; i < Bookcount; i++)
        {
            if (library[i].BookID == id)
            {
                printf("Book ID: %d | Book Name: %s | Book Author: %s | Category: %s | Price: %.2f | Rating: %.1f\n",
                       library[i].BookID, library[i].Book_Name, library[i].Author_Name,
                       library[i].Category, library[i].Price, library[i].Rating);
                found = 1;
                break;
            }
        }

        if (!found)
        {
            printf("Book not found!!\n");
        }
    }
    else if (choice == 2)
    {
        char name[MAX_NAME];
        int found = 0;
        printf("Enter book name here: ");
        fgets(name, MAX_NAME, stdin);
        name[strcspn(name, "\n")] = 0;

        for (int i = 0; i < Bookcount; i++)
        {
            if (strcasecmp(library[i].Book_Name, name) == 0)
            {
                printf("Book ID: %d | Book Name: %s | Book Author: %s | Category: %s | Price: %.2f | Rating: %.1f\n",
                       library[i].BookID, library[i].Book_Name, library[i].Author_Name,
                       library[i].Category, library[i].Price, library[i].Rating);
                found = 1;
                break;
            }
        }

        if (!found)
        {
            printf("Book not present\n");
        }
    }
    else
    {
        printf("Invalid Choice\n");
    }
}

void authorBooks()
{
    char author[MAX_AUTHOR];
    printf("Enter author's name here: ");
    fgets(author, MAX_AUTHOR, stdin);
    author[strcspn(author, "\n")] = 0;

    int found = 0;
    for (int i = 0; i < Bookcount; i++)
    {
        if (strcasecmp(library[i].Author_Name, author) == 0)
        {
            printf("Book ID: %d | Book Name: %s | Book Author: %s | Category: %s | Price: %.2f | Rating: %.1f\n",
                   library[i].BookID, library[i].Book_Name, library[i].Author_Name,
                   library[i].Category, library[i].Price, library[i].Rating);
            found = 1;
        }
    }
    if (!found)
    {
        printf("No books found for this author.\n");
    }
}

void categoryBooks()
{
    char category[MAX_CATEGORY];
    printf("Which category of books do you want to read? ");
    fgets(category, MAX_CATEGORY, stdin);
    category[strcspn(category, "\n")] = 0;

    int found = 0;
    for (int i = 0; i < Bookcount; i++)
    {
        if (strcasecmp(library[i].Category, category) == 0)
        {
            printf("Book ID: %d | Book Name: %s | Book Author: %s | Category: %s | Price: %.2f | Rating: %.1f\n",
                   library[i].BookID, library[i].Book_Name, library[i].Author_Name,
                   library[i].Category, library[i].Price, library[i].Rating);
            found = 1;
        }
    }
    if (!found)
    {
        printf("No books found in this category.\n");
    }
}

void updateBookDetails()
{
    int id, found = 0;
    printf("Enter book ID to update it's details: ");
    scanf("%d", &id);

    for (int i = 0; i < Bookcount; i++)
    {
        if (library[i].BookID == id)
        {
            printf("Enter new price: ");
            scanf("%f", &library[i].Price);
            printf("Enter new rating: ");
            scanf("%f", &library[i].Rating);
            found = 1;
            break;
        }
    }

    if (!found)
    {
        printf("Book not found\n");
    }
}
void displaySortedBooks()
{
    int choice;
    printf("Sort by: 1. Price  2. Rating\nEnter choice: ");
    scanf("%d", &choice);

    Book temp;
    for (int i = 0; i < Bookcount - 1; i++)
    {
        for (int j = i + 1; j < Bookcount; j++)
        {
            int condition = 0;
            if (choice == 1)
                condition = library[i].Price < library[j].Price;
            else if (choice == 2)
                condition = library[i].Rating < library[j].Rating;

            if (condition)
            {
                temp = library[i];
                library[i] = library[j];
                library[j] = temp;
            }
        }
    }
    displayAllBooks();
}

void top3Books()
{
    int choice;
    printf("Top 3 by: 1. Price  2. Rating\nEnter choice: ");
    scanf("%d", &choice);

    Book temp;
    for (int i = 0; i < Bookcount - 1; i++)
    {
        for (int j = i + 1; j < Bookcount; j++)
        {
            int condition = 0;
            if (choice == 1)
                condition = library[i].Price < library[j].Price;
            else if (choice == 2)
                condition = library[i].Rating < library[j].Rating;

            if (condition)
            {
                temp = library[i];
                library[i] = library[j];
                library[j] = temp;
            }
        }
    }
    for (int i = 0; i < Bookcount && i < 3; i++)
    {
        printf("%d | %s | %s | %s | %.2f | %.1f\n",
               library[i].BookID, library[i].Book_Name, library[i].Author_Name,
               library[i].Category, library[i].Price, library[i].Rating);
    }
}

int main()
{
    int choice;
    while (1)
    {
        printf("\n Book Management System \n");
        printf("1. Add Book\n");
        printf("2. Remove Book\n");
        printf("3. Search Book (by ID or Name)\n");
        printf("4. Show Author's Books\n");
        printf("5. Show Category's Books\n");
        printf("6. Update Book Price/Rating\n");
        printf("7. Display Sorted Books (by Price/Rating)\n");
        printf("8. Display All Books\n");
        printf("9. Display Top 3 Books (by Price/Rating)\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar(); // remove newline

        if (choice == 1)
        {
            addBook();
        }
        else if (choice == 2)
        {
            removeBook();
        }
        else if (choice == 3)
        {
            searchBook();
        }
        else if (choice == 4)
        {
            authorBooks();
        }
        else if (choice == 5)
        {
            categoryBooks();
        }
        else if (choice == 6)
        {
            updateBookDetails();
        }
        else if (choice == 7)
        {
            displaySortedBooks();
        }
        else if (choice == 8)
        {
            displayAllBooks();
        }
        else if (choice == 9)
        {
            top3Books();
        }
        else if (choice == 0)
        {
            return 0;
        }
        else
        {
            printf("Invalid Choice!\n");
        }
    }
}