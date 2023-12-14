/*
--Zinal--
population calculator based off of start and end population

*/

// includes
#include <cs50.h>
#include <stdio.h>

// main
int main(void)
{
    // ask user for  start and ending values
    // declare variables
    int start;
    int end;
    int years = 0;

    do
    {
        start = get_int("Starting Population: ");
    }
    while (start < 1);

    do
    {
        end = get_int("ending Population: ");
    }
    while (end <= start);

    while (start < end)
    {
        float a_res1 = start / 3; // 400 (result for 1200)
        float a_res2 = start / 4; // 300 (result for 1200)
        start += a_res1 - a_res2;
        years++;
    }

    printf("Years: %d\n", years);
    return 0;
}
