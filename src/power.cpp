// Specify the header filepath explicitly (bad)
#include "../headers/power.h"

/*
// Requires using a compiler option that specifies where the headers are located
#include "power.h"
*/

int power(int i, int n)
{
    int result = 1;
    while (n > 0)
    {
        result *= i;
        --n;
    }
    return result;
}
