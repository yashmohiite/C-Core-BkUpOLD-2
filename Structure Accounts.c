#include<stdio.h>
#include<stdlib.h>

struct Account
{
    int accNo;
    char name[10];
    float balance;
};

int main ()

{
    int i;

    struct Account acc[2];

    printf("Size of int accNo in Struct Account is %d\n", sizeof(acc[i].accNo));
    printf("Size of char (string) name in Struct Account is %d\n", sizeof(acc[i].name));
    printf("Size of float balance in Struct Account is %d\n\n\n\n", sizeof(acc[i].balance));

    for(i = 0 ; i < 2 ; i++)    //Always start Loops from 0 especially for Array Cases
    {
    printf("Enter Account No:\n");
    scanf("%d", &acc[i].accNo);

    printf("Enter Account Holder's Name:\n");
    scanf("%s", &acc[i].name);

    printf("Enter Balance in Account\n");
    scanf("%f", &acc[i].balance);
    }

    for(i = 0 ; i < 2 ; i++)
    {
    printf("Account No is : %d\n", acc[i].accNo);
    printf("Name of the Person is %s\n", acc[i].name);
    printf("Balance in the Account is %f\n", acc[i].balance);
    }

    return 0;
}
