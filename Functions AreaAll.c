#include<stdio.h>

void areaCircle();
void triangleArea(float , float);
float rectArea();
float squareArea(float);

int main ()

{
    areaCircle();

    triangleArea(2.2 , 3.3);

    printf("Area of Rectangle = %f\n", rectArea());

    printf("Area of Square = %f\n", squareArea(5));

    return 0;
}

void areaCircle()
{
    float r, ca;

    printf("Enter Radius of Circle: \n");
    scanf("%f", &r);

    ca = 3.14 * r * r;

    printf("Area of Cir circle = %f\n", ca);
}



void triangleArea(float a , float b)
{
    float ta;

    ta = 0.5 * a * b;

    printf("Area of Triangle = %f\n", ta);
}



float rectArea()
{
    float l, w, ra;

    printf("Enter l and w of Rectangle : \n");
    scanf("%f%f", &l, &w);

    ra = l * w;

    return ra;
}



float squareArea(float a)
{
    float sa = a * a;

    return sa;
}
