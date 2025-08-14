// Pass By Value

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// typedef struct Employee
// {
//     int id;
//     char name[20];
//     int salary;
// } Employee;

// Employee storeStudent(Employee stud)
// {
//     printf("Enter id, name and salary of employee: \n");

//     scanf("%d", &stud.id);
//     scanf("%s", stud.name);
//     scanf("%d", &stud.salary);
//     return stud;
// }

// void displayStudent(Employee stud)
// {
//     printf("ID=%d Name=%s Salary=%d\n", stud.id, stud.name, stud.salary);
// }

// int main()
// {
//     Employee s1, s2, s3;

//     s1 = storeEmployee(s1);
//     s2 = storeEmployee(s2);
//     s3 = storeEmployee(s3);

//     displayEmployee(s1);
//     displayEmployee(s2);
//     displayEmployee(s3);

//     return 0;
// }

// Pass By address

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// typedef struct Employee
// {
//     int id;
//     char name[20];
//     int salary;
// } Employee;

// void storeEmployee(Employee *stud)
// {
//     printf("Enter id, name and salary of employee: \n");
//     scanf("%d", &stud->id); // same as ((*stud).rollno)
//     scanf("%s", stud->name);
//     scanf("%d", &stud->salary);

//     // return stud;
// }

// void displayEmployee(Employee *stud)
// {
//     printf("ID=%d Name=%s Salary=%d\n", stud->id, stud->name, stud->salary);
// }

// int main()
// {
//     Employee s1, s2, s3;
//     storeEmployee(&s1);
//     storeEmployee(&s2);
//     storeEmployee(&s3);

//     displayEmployee(&s1);
//     displayEmployee(&s2);
//     displayEmployee(&s3);

//     return 0;
// }

// Pass By Address (Array of Structs)

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Employee
{
    int id;
    char name[20];
    int salary;
} Employee;


void storeEmployee(Employee *stud, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Enter id, name and salary of employee: \n");
        scanf("%d", &stud[i].id);
        scanf("%s", stud[i].name);
        scanf("%d", &stud[i].salary);
    }
}
void displayEmployee(Employee *stud, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("ID=%d Name=%s Salary=%d\n", stud[i].id, stud[i].name, stud[i].salary);
    }
}
int main()
{
    int n;
    printf("Enter number of employees: \n");
    scanf("%d", &n);

    Employee s[n]; // Array of struct Student of n size
    storeEmployee(s, n);
    displayEmployee(s, n);

    return 0;
}