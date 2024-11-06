#include <stdio.h>
#include <string.h>
struct student{
    int rollno;
    char name[15];
    float age;
    char gender;
};
int main() {
    struct student s1;
    printf("Size of student structure is %d", sizeof(s1));
    s1.rollno = 2024080166;
    strcpy(s1.name,"Paila karuna");
    s1.age = 20;
    s1.gender = 'F';
    
    printf("\nRoll no: %d",s1.rollno);
    printf("\nName: %s",s1.name);
    printf("\nAge: %f",s1.age);
    printf("\nGender: %c",s1.gender);
    return 0;
}

OUTPUT;
Size of student structure is 28
Roll no: 2024080166
Name: Paila karuna
Age: 20.000000
Gender: F

=== Code Execution Successful ===

