#include<stdio.h>

int main ()

{
    float r, b, h, rl, rb;
    float ca, ta, ra;
    int ch, c;

    menu:     //Note Here     //It works like a label, This is known as the actual Menu Driven Program!

    printf("Select following: \n");
    printf("1 - Area of Circle \n2 - Area of Triangle \n3 - Area of Rectngle\n");
    printf("Enter ypur choice :\n");
    scanf("%d", &ch);

    switch (ch)
    {
    case 1:
        printf("Enter Radius of Circle : \n");
        scanf("%f", &r);

        ca = 3.14 * r * r;

        printf("\nArea of Circle = %f", ca);
        break;

    case 2:
        printf("Enter Base and Height for Triangle : \n");
        scanf("%f%f", &b, &h);

        ta = 0.5 * b * h;

        printf("\nArea of Triangle = %f", ta);
        break;

    case 3:
        printf("Enter Length and Breadth of Rectangle : \n");
        scanf("%f%f", &rl, &rb);

        ra = rl * rb;

        printf("\nArea of Rectangle = %f", ra);
        break;

    default:
        printf("Invalid Choice, check again :");
        break;
    }

    printf("\nDo you want to Continue the Program ? \nIf Yes Press 1\n");
    scanf("%d", &c);

    if(c == 1)
    {
        goto menu;     // Condition can be written to go to label, or else 'goto 'label'' also works if there wasn't conditn(depends on program / application)
    }

    else
        printf("----------Thank You----------\n");

    return 0;
}
