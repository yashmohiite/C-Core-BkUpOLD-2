#include <stdio.h>

// Structure is a collection of Different DataTypes, whereas similarly Union is also collection of different DataTypes.
// Structure allocates the memory separately for every attributes, whereas Union allocates memory only for largest DataType which is Declared in
//Union Declaration.
//Use Union only when taking data and immediately printing, if you want to enter and print everything together, use struct

/*
Example
---------------------------------------------------------------------------------------------------------------------------------------------------
struct Student
{
    int rno;
    char nm[10];
    float perct;
};
//4 bytes + 10 bytes + 4 bytes = 18 Bytes Total'

---------------------------------------------------------------------------------------------------------------------------------------------------

union Student
{
    int rno;
    char nm[10];
    float perct;
};
//Max size in above declaration is 10 bytes which is largest among it of char.
----------------------------------------------------------------------------------------------------------------------------------------------------
*/

struct Product
{

};

int main ()

{


    return 0;
}
