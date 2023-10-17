#include<stdio.h>

// Arguments, No Return

void areacircle2(float);
int main ()

{
    float r;

    printf("Enter Radius of Circle : \n");
    scanf("%f", &r);

    areacircle2(r);




    printf("Enter Radius of Circle : \n");
    scanf("%f", &r);

    areacircle2(r);

    return 0;
}

void areacircle2(float a)
{
    float ca;

    ca = 3.14 * a * a;

    printf("Area of Circle : %f \n", ca);
}
