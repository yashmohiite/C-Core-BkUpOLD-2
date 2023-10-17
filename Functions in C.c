#include<stdio.h>

// Without Arguments and without Return Type

void add();

void areacircle();

int main ()
{
    add();

    add();

    areacircle();

    return 0;
}

void add()
{
    int n1, n2, add;

    printf("Enter 2 Nos.\n");
    scanf("%d%d", &n1, &n2);

    add = n1 + n2;

    printf("Addition is %d\n", add);
}

void areacircle()
{
    float r, ca;

    printf("Enter radius of Circle:\n");
    scanf("%f", &r);

    ca = 3.14 * r * r;

    printf("Area of Circle = %f", ca);
}
