//15/12/22
#include<stdio.h>
int factorial(int);
int fibonacci(int);
void main()
{
    int n;
    printf("\nEnter any No. for Finding the Factorial\n");
    scanf("%d", &n);
    printf("\nThe Factorial of %d is = %d\n", n, factorial(n));

    printf("--------------------------------------------");
    printf("\n\nEnter How many terms you want in Fibonacci Series:\n");
    scanf("%d", &n);
    //int i=1, j=1;
    //printf("%d\t%d", i, j);
    fibonacci(n);
}
int factorial(int n)
{
    if(n>1)
    {
        return n*factorial(n-1);
    }
    else
    {
        return 1;
    }
}
int fibonacci(int n)
{
    static int i=0, j=1, k; //For First Time Does not Change the Values if called more times.(Confirm This Again)
    if(n>0)
    {
        k=i+j;//1 2 3 5
        i=j;//i=3
        j=k;//j=5
        printf("%d ", k);// 1 2 3 5
        fibonacci(n-1);//6
    }
}
