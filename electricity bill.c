#include<stdio.h>

int main ()

{
    int consumerNo;
    char cname[10]; // Note here //This means a String
    int noofunits;
    float total = 0;
    float tax, finaltotal;

    printf("Enter consumer name : \n");
    scanf("%s", &cname);   //%c for single character, %s for a string.     //NOT SURE: If '&' Is Required For A STRING, Or works With or Without '&'

    printf("Enter consumer no : \n");
    scanf("%d", &consumerNo);

    printf("Enter No. of Units : \n");
    scanf("%d", &noofunits);

    if (noofunits <= 100)
    {
        total = noofunits * 3.33;
    }

    else if ((noofunits > 100) && (noofunits <= 300))
    {
        total = (100 * 3.33) + (noofunits - 100) * 7.77;
    }

    else if ((noofunits > 300) && (noofunits <= 500))
    {
        total = (100 * 3.33) + (200 * 7.77) + (noofunits - 300) * 11.11;
    }
    else if (noofunits > 500)    // Or : 'else'
    {
        total = (100 * 3.33) + (200 * 7.77) + (200 * 11.11) + (noofunits - 500) * 17.17;
    }

    total = total + 500;

    tax = total * 0.06;

    finaltotal = total + tax;

    printf("\n\t|\t----------ELECTRICITY BILL----------\t|");
    printf("\n\t|\tCustomer Number\t | %d\t\t|", consumerNo);
    printf("\n\t|\tCustomer Name\t\t | %s\t|", cname);
    printf("\n\t|\tNumber of Units\t\t | %d\t\t|", noofunits);
    printf("\n\t|\tTotal\t\t\t | %f\t|", total);
    printf("\n\t|\tTax\t\t\t | %.2f\t|", tax);
    printf("\n\t|\tFinal Total\t\t | %.2f\t|", finaltotal);
    printf("\n\t------------------------------------------\n");

    return 0;
}
