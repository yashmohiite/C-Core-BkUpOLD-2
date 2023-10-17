//IMP Code

#include<stdio.h>
#include<stdlib.h>

struct Student
{
    int rno;
    char name[10];
    float perct;
    int sub1, sub2, sub3, total;
};

struct Student create();        //Note
void display(struct Student);   //Note
struct Student calculate(struct Student);

int main ()
{
    struct Student stud1;   //Initially Null
    stud1 = create();       //Note
    stud1 = calculate(stud1);
    display(stud1);         //Note

    return 0;
}

struct Student create()
{
    struct Student stud;    //initially Null
    printf("Enter Student Roll No:\n");
    scanf("%d", &stud.rno);
    printf("Enter Name:\n");
    scanf("%s", &stud.name);
    printf("Enter Marks for 3 Subjects:\n");
    scanf("%d%d%d", &stud.sub1, &stud.sub2, &stud.sub3);

    return stud;    //Note
}

struct Student calculate(struct Student stud)   //Note
{
    stud.total=stud.sub1 + stud.sub2 + stud.sub3;
    stud.perct = stud.total / 3;

    return stud;    //Note
}

void display(struct Student stud)   //Note
{
    printf("Roll No is: %d\n", stud.rno);
    printf("Name is: %s\n", stud.name);
    printf("Percentage is: %f\n", stud.perct);
}
