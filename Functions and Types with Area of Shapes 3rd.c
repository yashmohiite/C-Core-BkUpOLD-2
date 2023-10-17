// No Arguments, But Return

#include<stdio.h>

float areaCircle3();

int main ()

{
    float a;

    a = areaCircle3();

    printf("Area of Circle = %f\n", a);




    a = areaCircle3();

    printf("Area of Circle = %f\n", a);

    return 0;
}

float areaCircle3()
{
    float r, ca;

    printf("Enter Radius of Circle :\n");
    scanf("%f", &r);

    ca = 3.14 * r * r;

    return ca;
}
