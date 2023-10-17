//  Structure is a Collection of Different DataTypes

#include<stdio.h>
#include<stdlib.h>

struct Student
{
    int rollno;
    char name[10];
    float perct;
};

int main ()

{
    struct Student stud;    // Memory Allocated to Actual Structure Created/Defined and Object Created

    printf("\nSize of int Student is : %d", sizeof(stud.rollno));
    printf("\nSize of name Student is : %d", sizeof(stud.name));
    printf("\nSize of perct Student is : %d", sizeof(stud.perct));
    printf("\nSize of Structure Student is : %d", sizeof(stud));

    printf("\nEnter Student Roll No.\n");
    scanf("%d", &stud.rollno);

    printf("\nEnter Student Name.\n");
    scanf("%s", stud.name);

    printf("\nEnter Student Percentage\n");
    scanf("%f", &stud.perct);

    printf("\nThe Roll No. is : %d\n", stud.rollno);
    printf("\nThe Name is : %s\n", stud.name);
    printf("\nThe Percentage is : %f\n", stud.perct);

    return 0;
}
