// INCOMPLETE

#include<stdio.h>

int main ()

{
    int sal, annualSal;
    float total, taxTotal, incomeTax;
    char name[20];

    printf("Enter employee name: \n");
    scanf("%s", &name);

    printf("Enter monthly Salary : \n");
    scanf("%d", &sal);

    printf("Enter Annual Salary : \n");
    scanf("%d", &annualSal);

    if (annualSal <= 150000)
    {
        total = annualSal;
    }

    else if((annualSal > 150000) && (annualSal <= 300000))
    {
        total = annualSal * 0.03;
        annualSal += total;
        incomeTax = total - annualSal;
    }

    printf("Annual Salary : %d \n", annualSal);
    printf("Taxed Annual Salary : %.2f \n", total);
    printf("Income Tax : %.2f \n", incomeTax);

    return 0;
}
