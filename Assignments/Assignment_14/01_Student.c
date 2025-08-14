// Pass By Value

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// typedef struct Student
// {
//     int rollno;
//     char name[20];
//     int marks;
// } Student;

// Student storeStudent(Student stud)
// {
//     printf("Enter rollno, name and marks of student: \n");

//     scanf("%d", &stud.rollno);
//     scanf("%s", stud.name);
//     scanf("%d", &stud.marks);
//     return stud;
// }

// void displayStudent(Student stud)
// {
//     printf("Rollno=%d Name=%s Marks=%d\n", stud.rollno, stud.name, stud.marks);
// }

// int main()
// {
//     Student s1, s2, s3;

//     s1 = storeStudent(s1);
//     s2 = storeStudent(s2);
//     s3 = storeStudent(s3);

//     displayStudent(s1);
//     displayStudent(s2);
//     displayStudent(s3);

//     return 0;
// }






// Pass By address

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// typedef struct Student
// {
//     int rollno;
//     char name[20];
//     int marks;
// } Student;

// void storeStudent(Student *stud)
// {
//     printf("Enter rollno, name and marks of student\n");
//     scanf("%d", &stud->rollno);  // same as ((*stud).rollno)
//     scanf("%s", stud->name);
//     scanf("%d", &stud->marks);

//     // return stud;
// }

// void displayStudent(Student *stud)
// {
//     printf("Rollno=%d Name=%s Marks=%d\n", stud->rollno, stud->name, stud->marks);
// }

// int main()
// {
//     Student s1, s2, s3;
//     storeStudent(&s1);
//     storeStudent(&s2);
//     storeStudent(&s3);

//     displayStudent(&s1);
//     displayStudent(&s2);
//     displayStudent(&s3);

//     return 0;
// }




// Pass By Address (Array of Structs)

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Student
{
    int rollno;
    char name[20];
    int marks;

} Student;

void storeStudent(Student *stud, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Enter rollno, name and marks of student\n");
        scanf("%d", &stud[i].rollno);
        scanf("%s", stud[i].name);
        scanf("%d", &stud[i].marks);
    }
}
void displayStudent(Student *stud, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Rollno=%d Name=%s Marks=%d\n", stud[i].rollno, stud[i].name, stud[i].marks);
    }
}
int main()
{
    int n;
    printf("Enter number of students: \n");
    scanf("%d", &n);

    Student s[n]; // Array of struct Student of n size
    storeStudent(s, n);
    displayStudent(s, n);

    return 0;
}