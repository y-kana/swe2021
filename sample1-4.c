// sample 1-4
#include <stdio.h>
int main(){
    char firstname[20];
    char lastname[20];
    int id;
    printf("What is your full name?\n");
    scanf("%s %s", firstname, lastname);
    printf("What is you student ID?\n");
    scanf("%d", &id);
    printf("Welcome, %s (student ID:%d)!\n", firstname, id);
}