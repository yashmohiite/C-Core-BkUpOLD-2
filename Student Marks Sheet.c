#include<stdio.h>

int main ()

{
    int sub1, sub2, sub3, total;
    float perct;
    int rollNo;
    char name[10];

    printf("Enter your name : \n");
    scanf("%s", &name);

    printf("Enter Roll NO: \n");
    scanf("%d", &rollNo);

    printf("Enter data of sub1, sub2, sub3 resp out of 100 Marks : \n");
    scanf("%d%d%d", &sub1, &sub2, &sub3);

    total = sub1 + sub2 + sub3;

    perct = total/3;

    printf("Your Name : %s \n", name);
    printf("Your Roll No : %d \n", rollNo);
    printf("Sub1 Marks : %d \n", sub1);
    printf("Sub2 Marks : %d \n", sub2);
    printf("Sub3 Marks : %d \n", sub3);
    printf("Total = %d \n", total);
    printf("Percentage = %.2f \n", perct);

    if((sub1 > 40) && (sub2 > 40) && (sub3 > 40))
    {
        printf("\n\tResult:\t PASS \n");

        if (perct > 80) //No 'else if' here, it needs always '}' before declaring
        {
            printf("Grade is A \n");
        }

        else if (perct > 50)
        {
            printf("Grade is C \n");
        }
    }

    else
        printf("Fail \n");

    return 0;
}
