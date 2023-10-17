//REVISE

/*
CONDITIONAL OPERATOR : ?:

x = 10  y = 20

z = (x > y) ? x : y     // If True, x Value goes to Z, If False, Y Value goes to Z      // ANSWER = 20

-------------------------

a = 5   b = 5
c = a!=b ? 100:200 // Answer = 200
*/

// Take 3 No. Check Greater betn them using Conditional Operator:

#include<stdio.h>

int main ()

{
    int num1, num2, num3, result;

    printf("Enter 3 Numbers : \n");
    scanf ("%d%d%d", &num1, &num2, &num3);

    result = (num1 > num2) ? (num1 > num3 ? num1 : num2) : (num2 > num3 ? num2 : num3); // NOTE CAREFULLY

    printf("Largest is %d", result);

    return 0;
}
