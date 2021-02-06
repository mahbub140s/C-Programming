// Program to perform all arithmetic operations
#include<stdio.h>
int main()
{
    int num1, num2;
    int sum, sub, mult, mod;
    float div;

    // Input two numbers from user
    printf("Enter any two numbers: ");
    scanf("%d%d", &num1, &num2);

    // Perform all arithmetic operations

    sum = num1 + num2;
    sub = num1 - num2;
    mult = num1 * num2;
    div = (float)num1 / num2;
    mod = num1 % num2;

    // Print result of all arithmetic operations

    printf("Summation : %d\n", sum);
    printf("Substruction : %d\n", sub);
    printf("Product : %d\n", mult);
    printf("Division : %f\n", div);
    printf("Modulus : %d", mod);

    return 0;
}
