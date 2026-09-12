#include "factorial.h"
#include "stdio.h"

#pragma codeseg PAGE_20_CODE

int factorial(int n) __banked
{
    printf("Yo \n");

    if (n <= 1)
    {
        return 1;
    }
    return n * factorial(n - 1);
}

#pragma codeseg PAGE_21_CODE

int factorial_squared(int n) __banked
{
    return factorial(n) * factorial(n);
}
