#include<stdio.h>

struct student
{
    int rollno;
    char name[10];
    float perct;
};

int main ()
{
    struct student stud[3];

    int i;

    for (i = 0 ; i < 3 ; i++)
    {
        printf("\nEnter Student Roll Number:\n");
        scanf("%d", &stud[i].rollno);

        printf("\nEnter Student Name\n");
        scanf("%s", stud[i].name);

        printf("\nEnter Student Perct\n");
        scanf("%f", &stud[i].perct);
    }

    for (i = 0 ; i < 3 ; i++)
    {
        printf("\n------------------------------------------------------------------------");
        printf("\nStudent Roll Number : %d\n", stud[i].rollno);
        printf("\nStudent Name : %s\n", stud[i].name);
        printf("\nStudent Perct : %f\n", stud[i].perct);
    }
    return 0;
}
