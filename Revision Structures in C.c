#include<stdio.h>
#include<stdlib.h>

struct Student
{
    int rno;
    char name[10];
};

int main()
{
    struct Student s1; //Memory Allocation //You can also Allocate Memory by not writing this line and writing just s1 after closing bracket of struct body,
                       //Example: "}s1;"
    printf("Enter Roll No, and Name of Student\n");
    scanf("%d%s", &s1.rno, s1.name);

    printf("Entered Values are: %d and %s\n", s1.rno, s1.name);

    //Using Pointer: IMPORTANT CONCEPTS---------------------------------------------------------------------------------------------------------------------

    //Below Code Runs in Turbo C++ or Other Compilers

    struct Student *s2;

    printf("\n\nEnter Roll No and Name of Student: \n");
    scanf("%d%s", s2->rno, s2->name);

    printf("Entered Values are: %d and %s\n", s2->rno, s2->name);

    return 0;
}
