//SOLVE ASSIGNMENTS BELOW TOO

/*

x = 2           y = 2

Post            Pre

a = x++         b = ++y
a = 2           b = 3
x = 3           y = 3

Here, In Post, value of x changes later, first we need to use original value that will be given to a. In Post Increment, change value after Equation is Solved

Here, In Pre value of y changes before, then that value is given to b



---------------------------------------------------------------------------------

a = 2, b = 2

x = a++ + ++b
x = 2 + 3
a = 3
b = 3

---------------------------------------------------------------------------------

a = 3, b = 4, c = 5

x = a++ + ++b + c++
x = 3 + 5 + 5 = 13

a = 4
b = 5
c = 6

----------------------------------------------------------------------------------

a = 3, b = 4, c = 3

x = ++a + b++ + --c
x = 4 + 4 + 2 = 10
a = 4
b = 5
c = 2

-----------------------------------------------------------------------------------

//IMP LECTURE : OPERATORS - 3

a = 1, b = 1

x = a++ + a++ + a++ + a++ + a++
  //1   + 2   + 3   + 4   + 5

y = ++b + ++b + ++b + ++b + ++b     find x = ?, y = ?
  //2   + 3   + 4   + 5   + 6  // But here in C Compiler first 2 are considered '3 + 3' and not '2 + 3'

x = 15
y = 21 for C Compiler, 20 for Java Compiler
a = 6
b = 6

------------------------------------------------------------------------------------

a = 1, b = 0

z = a++ && ++b

z = 1
a = 2
b = 1

-----------------------------------------------------------------------------------------

a = 1, b = 0

x = b++ && ++a

x = 1
b = 1
a = 2

--------------------------------------------------------------------------------------------

int x = 0, y = 1;
int a, b;

a = x++ && ++y;
//  1  &&  1
//0
printf("\nValue of x is %d", x);  //1
printf("\nValue of y is %d", y);  //1

b = ++x && y++;
//    2 && 2
//   1

---------------------------------------------------------------------------------------------

//IMP LECTURE : OPERATORS - 3

x = 1, y = 1

a = x++ + ++x
   // 1 + 3

b = ++y + y++
   //                                 // In C Compiler it is 5, other Commpilers 4       // Also refer Operator Precedence rules in C, just like BODMAS Rule
a = 4
b = 3
x = 2
y = 2

*/

#include<stdio.h>

int main ()
{


    return 0;
}
