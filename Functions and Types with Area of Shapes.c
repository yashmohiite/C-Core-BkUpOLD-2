#include<stdio.h>

// No Arg, No Return

void areacircle();

int main ()

{
    areacircle();

    areacircle();

    return 0;
}

void areacircle()
{
    float r, ca;

    printf("Enter radius of Circle : \n\n");
    scanf("%f", &r);

    ca = 3.14 * r * r;

    printf("Area of Circle : %f\n", ca);
}
