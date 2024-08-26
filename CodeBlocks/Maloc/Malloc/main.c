#include <stdio.h>
#include <stdlib.h>
#include "header.h"

int main()
{

    int num = getN("Enter first number: ");
    int num1 = getN("Enter second number: ");

    int sum= add(num1, num);
    printf("The sum is: %d", sum);
    return 0;
}
