/*
Zinal
10/25/2023
calculate area of right triangle from base and height
*/

//includes
#include <stdio.h>
#include <cs50.h>

//call main and get vars
int main()
{

    {
        // define variables
            double height;
            double base;
            double area;

        // calculate area based on given inputs
        height = get_double ("Enter the height of the triangle: ");
        base = get_double ("Enter the base of the triangle: ");
        area = base * height * 0.5f;

        printf("the are of the triangle is %f\n", area);
        return 0;
    }

}

