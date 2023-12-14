/*
--Zinal--
12/12/23
*/

// includes
#include <cs50.h>
#include <stdio.h>

// main
int main(void)
{
    // declare variable
    int n;

    // ask user for whole numeric value only from 1-8
    n = get_int("enter a number between 1 and 8: ");

    // ask again if requirements not met
    do
    {
        printf("%i is an invalid number\n", n);
    } while (n > 0 && n < 9);
    n = get_int("enter a number between 1 and 8: ");

    /// <summary>
    /// long ass printing if statements
    /// </summary>
    /// <param name="n">number that the user gave</param>
    /// <returns>nothing and prints staircase(not in that order)</returns>

    if (n == 1)
    {
        printf("#\n");
        return 0;
    }
    if (n == 2)
    {
        printf(" #\n");
        printf("##\n");
    }
    if (n == 3)
    {
        printf("  #\n");
        printf(" ##\n");
        printf("###\n");
    }
    if (n == 4)
    {
        printf("   #\n");
        printf("  ##\n");
        printf(" ###\n");
        printf("####\n");
    }
    if (n == 5)
    {
        printf("    #\n");
        printf("   ##\n");
        printf("  ###\n");
        printf(" ####\n");
        printf("#####\n");
    }
    if (n == 6)
    {
        printf("     #\n");
        printf("    ##\n");
        printf("   ###\n");
        printf("  ####\n");
        printf(" #####\n");
        printf("######\n");
    }
    if (n == 7)
    {
        printf("      #\n");
        printf("     ##\n");
        printf("    ###\n");
        printf("   ####\n");
        printf("  #####\n");
        printf(" ######\n");
        printf("#######\n");
    }
    if (n == 8)
    {
        printf("       #\n");
        printf("      ##\n");
        printf("     ###\n");
        printf("    ####\n");
        printf("   #####\n");
        printf("  ######\n");
        printf(" #######\n");
        printf("########\n");
    }
}
