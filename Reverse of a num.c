#include <stdio.h>

int main ()

    /*              // MY METHOD
    int n, u, t, h;

    printf("Enter a num you want to print in reverse : \n");
    scanf("%d", &n);

    u = n % 10;         // 123
    t = (n / 10) % 10;
    h = (n / 100) % 10;

    printf("\nReverse of %d is %d%d%d\n", n, u, t, h);
    */


{

int numbers, remainder, revnumber = 0;

int n, i;    //123 out 321
printf("Enter any number");
scanf("%d", &n);     // n = 123
i = 1;
while (n!=0) // 1!=0
{
    remainder = n % 10; //123%10=3      r=12%10=2       r=1%10=1
    //printf("%d", remainder);  //321
    revnumber = revnumber * 10 + remainder; //0 * 10 + 3 = 3 * 10 = 30 + 2 = 32 * 10 = 320 + 1 = 321
    n = n / 10;     //n = 123 / 10 = 12     n = n / 10 = 12 / 10 = 1            n = 1 / 10 = 0
}

printf("\nReverse of given No is : %d \n", revnumber);

return 0;

}
