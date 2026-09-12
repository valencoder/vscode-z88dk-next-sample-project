#include <stdio.h>
#include <input.h>
#include "clear-ula.h"
#include "fibonacci.h"
#include "factorial.h"

int main(void)
{
    clear_ula();

    printf("Valen Next \n");

    printf("Fibonacci(5) = %d\n", fibonacci(5));
    printf("Factorial(5) = %d\n", factorial(5));
    printf("Factorial(5)^2 = %d\n", factorial_squared(5));

    in_wait_key();

    return 0;
}
