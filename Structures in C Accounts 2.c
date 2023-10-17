#include<stdio.h>
#include<stdlib.h>

struct Account
{
    int accNo;
    char name[10];
    float accBal;
};

int main ()

{
    int i, search, flag = 0, ch, wamt, damt;
    float remBal;

    struct Account acc[3]; //Note

    printf("Size of Entire Structure Account is : %d\n", sizeof(struct Account)); //Note, here Structure takes 2 Bytes of Memory Size by Default, so :
    //4 + 10 + 4 + 2 = 20 Total Size

    for(i = 0 ; i < 3 ; i++)
    {
        printf("Enter Acc No.\n");
        scanf("%d", &acc[i].accNo);

        printf("Enter Name:\n");
        scanf("%s", &acc[i].name);

        printf("Enter Acc Bal:\n");
        scanf("%f", &acc[i].accBal);
    }

    printf("========================================================================================================================\n");

    for(i = 0 ; i < 3 ; i++)
    {
        printf("Acc No is : %d\n", acc[i].accNo);
        printf("Account Holder Name is : %s\n", acc[i].name);
        printf("balance is : %f\n", acc[i].accBal);
        printf("\n===========================================================================================================================\n");
    }

    printf("Enter Acc No to Search:\n");
    scanf("%d", &search);

    for (i = 0 ; i < 3 ; i++)
    {
        if(search==acc[i].accNo)
        {
            flag = 1;
            break;
        }
    }

    if(flag)
    {
        printf("Search Completed Successfully\n");
    }
    else if(flag != 1)
    {
        printf("Search was Unsuccessful\n");
    }

    printf("1 - Withdraw\n2 - Deposit\n");
    printf("Enter a Choice:\n");
    scanf("%d", &ch);

    if(ch == 1)
    {
        printf("Enter Amount to Withdraw\n");
        scanf("%d", &wamt);

        remBal = acc[i].accBal - wamt;

        printf("Available Balance is %f in Account %d\n", remBal, acc[i].accNo);
    }

    else if(ch == 2)
    {
        printf("Enter Amount to Deposit\n");
        scanf("%d", &damt);

        remBal = acc[i].accBal + damt;

        printf("Available Balance is %f in Account %d\n", remBal, acc[i].accNo);
    }

    else
    {
        printf("Invalid Choice\n");
    }

    return 0;
}
