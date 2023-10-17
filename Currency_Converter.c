// Check for Invalid Errors not Displaying, Infinite Loop, etc. if Options selected within parameters, Code works Perfectly

#include<stdio.h>

int main ()

{
    float samt, ramt;
    int ch1, ch2, ch;

    Menu :

        printf("\n---------------------------CURRENCY CONVERTER-----------------------------\n");
        printf("Enter choice of Currency you have your Money in Initially :\n");
        printf("Enter your Currency Choice : \n1 - Rupee\n2 - Dollar\n3 - Euros\n");
        scanf("%d", &ch1);





        if (ch1 == 1)  //Initially Currency in Rupee
        {
            printf("Enter Currency you want to Convert to : \n");
        printf("1 - Rupee\n2 - Dollar\n3 - Euro\n");
        scanf("%d", &ch2);
            printf("Enter your Amt in Rupee :\n");
            scanf("%f", &samt);

            if (ch2 == 1) //To Rupee
            {
                ramt = samt;
                printf("%.3f Rupee = %.3f Rupee\n", samt, ramt);
            }
            else if (ch2 == 2)  // To Dollar
            {
                ramt = samt / 82.0;  // Never write type casting (float) or any other keyword in left hand side of '='
                printf("%.3f Rupee = %.3f Dollars\n", samt, ramt);
            }
            else if (ch2 == 3)  // To Euro
            {
                ramt = samt / 80.0;
                printf("%.3f Rupee = %.3f Euros\n", samt, ramt);
            }
            else
            {

                printf("Invalid, Check Again:\n");
            }
        }


        else if (ch1 == 2)  //Initially Currency in Dollar
        {
            printf("Enter Currency you want to Convert to : \n");
        printf("1 - Rupee\n2 - Dollar\n3 - Euro\n");
        scanf("%d", &ch2);
            printf("Enter your Amt in Dollar :\n");
            scanf("%f", &samt);

            if (ch2 == 1) //To Rupee
            {
                ramt = samt * 82;
                printf("%.3f Rupee = %.3f Rupee\n", samt, ramt);
            }
            else if (ch2 == 2)  // To Dollar
            {
                ramt = samt;  // Never write type casting (float) or any other keyword in left hand side of '='
                printf("%.3f Rupee = %.3f Dollars\n", samt, ramt);
            }
            else if (ch2 == 3)  // To Euro
            {
                ramt = samt * 1.02;
                printf("%.3f Rupee = %.3f Euros\n", samt, ramt);
            }
            else
                printf("Invalid, Check Again:\n");
        }



        else if (ch1 == 3)  //Initially Currency in Euro
        {
            printf("Enter Currency you want to Convert to : \n");
        printf("1 - Rupee\n2 - Dollar\n3 - Euro\n");
        scanf("%d", &ch2);
            printf("Enter your Amt in Euro :\n");
            scanf("%f", &samt);

            if (ch2 == 1) //To Rupee
            {
                ramt = samt * 80.53;
                printf("%.3f Rupee = %.3f Rupee\n", samt, ramt);
            }
            else if (ch2 == 2)  // To Dollar
            {
                ramt = samt / 0.98;  // Never write type casting (float) or any other keyword in left hand side of '='
                printf("%.3f Rupee = %.3f Dollars\n", samt, ramt);
            }
            else if (ch2 == 3)  // To Euro
            {
                ramt = samt;
                printf("%.3f Rupee = %.3f Euros\n", samt, ramt);
            }
            else
                printf("Invalid, Check Again:\n");
        }

        else
        {
                   printf("Invalid, Check Again\n");


        }



        printf("Do you want to continue conversions? If yes press 1, else 2 : \n");
        scanf("%d", &ch);

        if (ch == 1)
        {
            goto Menu;
        }

    return 0;
}
