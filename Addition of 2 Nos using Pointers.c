#include<stdio.h>

// One int needs a Memory of 4 bytes

int main ()

{
    int n1, n2, add, sub, div, mul;
    int *ptr1, *ptr2, *ptr3, *ptr4, *ptr5, *ptr6;

    printf("Enter 2 No. for Addition :\n");
    scanf("%d%d", &n1, &n2);

    ptr1 = &n1;
    ptr2 = &n2;

    add = *ptr1 + *ptr2;

    ptr3 = &add;

    ptr4 = &sub;
    ptr5 = &div;
    ptr6 = &mul;

    sub = *ptr1 - *ptr2;

    div = *ptr1 / *ptr2;

    mul = *ptr1 * *ptr2;

    printf("The 2 values Entered are : %d and %d\n", *ptr1, *ptr2);

    printf("The addition  of 2 values is : %d\n", *ptr3); // Careful to write ptr, and not the variables like 'add' or '&add'

    printf("Subtraction : %d - %d = %d\n", *ptr1, *ptr2, *ptr4);

    printf("Division : %d / %d = %d\n", *ptr1, *ptr2, *ptr5);

    printf("Multiplication : %d * %d = %d\n", *ptr1, *ptr2, *ptr6);

    return 0;
}

/*
2nd Part / REVISION

int n1, n2, add;

int *p1, *p2, *p3;

p1 = &n1;
p2 = &n2;
p3 = &add;

printf("\nEnter any two nos");
scanf("%d%d", p1, p2);

*p3 = *p1 + *p2;

printf("\nValue of n1 is : %d", *p1);
printf("\nValue of n2 is : %d", *p2);
printf("\nAdd is : %d", *p3);
printf("\nAdd using add var is : %d", add);
*/
