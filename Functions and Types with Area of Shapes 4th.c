// With Arguments, With return

#include<stdio.h>

float areaCircle4(float);

int main ()

{
    float r, a;

    printf("Enter Radius of Circle :\n");
    scanf("%f", &r);

    a = areaCircle4(r);

    printf("The Area of Circle = %f\n", a);






    printf("Enter Radius of Circle :\n");
    scanf("%f", &r);

    a = areaCircle4(r);

    printf("The Area of Circle = %f\n", a);

    return 0;
}

float areaCircle4(float b)
{
    float ca;

    ca = 3.14 * b * b;

    return ca;
}
