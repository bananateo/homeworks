#include <stdio.h>
#include "sup.h"
int factoriel(int a)
{
    int sum = 1;
    for(int i = 0; i != a; i++)
    {
        sum = sum * (a - i);
    }
    return sum;
}