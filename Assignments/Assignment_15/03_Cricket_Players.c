#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct CricketPlayer
{
    char name[20];
    int matches;
    int runs;
    int wickets;

} CricketPlayer;

void storePlayers(CricketPlayer *stud, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Enter name of the player, no. of mathces he played, total runs he scored, no. of wickets taken by him:\n");
        scanf("%s", stud[i].name);
        scanf("%d", &stud[i].matches);
        scanf("%d", &stud[i].runs);
        scanf("%d", &stud[i].wickets);
    }
}
void displayPlayers(CricketPlayer *stud, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Player Name = %s, No. of matches he played = %d, No. of runs he scored = %d, No. of wickets taken by him = %d\n", stud[i].name, stud[i].matches, stud[i].runs, stud[i].wickets);
    }
}

void disPlayMaximumRuns(CricketPlayer *stud, int n)
{
    int maxRun = 0;
    int flag = 0;
    for (int i = 0; i < n; i++)
    {
        if (stud[i].runs > maxRun)
        {
            maxRun = stud[i].runs;
            flag = i;
        }
    }

    printf("Player %s scored maximum runs, with a total of %d runs.\n", stud[flag].name, maxRun);
}

void disPlayMaximumWickets(CricketPlayer *stud, int n)
{
    int maxWicket = 0;
    int flag = 0;
    for (int i = 0; i < n; i++)
    {
        if (stud[i].wickets > maxWicket)
        {
            maxWicket = stud[i].wickets;
            flag = i;
        }
    }

    printf("Player %s had maximum wickets, with a total of %d wickets.\n", stud[flag].name, maxWicket);
}
int main()
{
    int n;
    printf("Enter number of players here: \n");
    scanf("%d", &n);

    CricketPlayer s[n]; // Array of struct CricketPlayer of n size
    storePlayers(s, n);
    displayPlayers(s, n);

    disPlayMaximumRuns(s, n);
    disPlayMaximumWickets(s, n);

    return 0;
}