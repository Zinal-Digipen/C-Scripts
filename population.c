/*
--Zinal--
population calculator based off of start and end population

*/

// includes
#include <cs50.h>
#include <stdio.h>

// declare variables
int start;
int end;
float years = ;

// main
int main(void)
{
    // ask user for start and ending population
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
}

// calculate days until

int calculate(void)
{
    int start_div_gain = start / 3;
    int start_div_loss = start / 4;
    years = (start / 3 + start / 4);
    printf(" population will be reached in %g years\n", years);

    return 0;
}

// calculate numerical difference in population

int calculate_difference(void)
{
    int a = 1200;
    int a_res1 = a / 3; //400
    int a_res2 = a / 4; //300
    int b = 1300;
    int years = a_res1 - a_res2;
    printf("population will be reached in %i years\n", years / 100);
    return 0;
}

