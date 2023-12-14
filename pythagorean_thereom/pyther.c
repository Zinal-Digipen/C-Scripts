/*
--Zinal--
12/12/23
*/

// includes
#include <cs50.h>
#include <stdio.h>
#include <math.h>

// main
int main(void)
{
    float a = get_float("What is the height?: ");
    float b = get_float("What is the length/base?: ");
    float c = sqrt(a * a + b * b);
    int C_rounded = sqrt(a * a + b * b);

    //print result and return
    printf("%f is the diagonal length\n", c);
}
