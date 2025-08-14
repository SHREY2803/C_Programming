#include <stdio.h>
#include <string.h>

typedef struct Movie
{
    char title[50];
    char director[50];
    int releaseYear;
    char genre[30];
} Movie;

void addMovies(Movie *movies, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("\nEnter details for movie %d:\n", i + 1);
        printf("Title: ");
        scanf(" %49[^\n]", movies[i].title);
        printf("Director: ");
        scanf(" %49[^\n]", movies[i].director);
        printf("Release Year: ");
        scanf("%d", &movies[i].releaseYear);
        printf("Genre: ");
        scanf(" %29[^\n]", movies[i].genre);
    }
}

void displayMovies(Movie *movies, int n)
{
    printf("\n--- Movie Database ---\n");
    for (int i = 0; i < n; i++)
    {
        printf("\nMovie %d:\n", i + 1);
        printf("Title: %s\n", movies[i].title);
        printf("Director: %s\n", movies[i].director);
        printf("Release Year: %d\n", movies[i].releaseYear);
        printf("Genre: %s\n", movies[i].genre);
    }
}

void searchMovie(Movie *movies, int n)
{
    char searchTitle[50];
    printf("\nEnter movie title to search: ");
    scanf(" %49[^\n]", searchTitle);

    for (int i = 0; i < n; i++)
    {
        if (strcasecmp(movies[i].title, searchTitle) == 0)
        {
            printf("\nMovie found:\n");
            printf("Title: %s\n", movies[i].title);
            printf("Director: %s\n", movies[i].director);
            printf("Release Year: %d\n", movies[i].releaseYear);
            printf("Genre: %s\n", movies[i].genre);
            return;
        }
    }
    printf("Movie not found.\n");
}

void updateMovie(Movie *movies, int n)
{
    char searchTitle[50];
    printf("\nEnter movie title to update: ");
    scanf(" %49[^\n]", searchTitle);

    for (int i = 0; i < n; i++)
    {
        if (strcasecmp(movies[i].title, searchTitle) == 0)
        {
            printf("\nEnter new details:\n");
            printf("Title: ");
            scanf(" %49[^\n]", movies[i].title);
            printf("Director: ");
            scanf(" %49[^\n]", movies[i].director);
            printf("Release Year: ");
            scanf("%d", &movies[i].releaseYear);
            printf("Genre: ");
            scanf(" %29[^\n]", movies[i].genre);
            printf("Movie updated successfully.\n");
            return;
        }
    }
    printf("Movie not found.\n");
}

int main()
{
    Movie movies[100];
    int choice, n = 0;

    while (1)
    {
        printf("\n--- Movie Database Menu ---\n");
        printf("1. Add Movies\n");
        printf("2. Display All Movies\n");
        printf("3. Search Movie by Title\n");
        printf("4. Update Movie Details\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1)
        {
            int count;
            printf("How many movies do you want to add? ");
            scanf("%d", &count);
            addMovies(&movies[n], count);
            n += count;
        }
        else if (choice == 2)
        {
            displayMovies(movies, n);
        }
        else if (choice == 3)
        {
            searchMovie(movies, n);
        }
        else if (choice == 4)
        {
            updateMovie(movies, n);
        }
        else if (choice == 5)
        {
            printf("Exiting program.\n");
            break;
        }
        else
        {
            printf("Invalid choice. Try again.\n");
        }
    }

    return 0;
}
