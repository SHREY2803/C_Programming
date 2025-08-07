#include<stdio.h>
#include<string.h>

int main(){

    char name[100];
    printf("Enter your first name here: \n");
    scanf("%s", name);

    char lastname[100];
    printf("Enter your last name here: \n");
    scanf("%s", lastname);

    strcat(name," ");
    strcat(name,lastname);

    printf("Your fullname is %s\n",name);
    return 0;
}