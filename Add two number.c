// Program to add two number
#include<stdio.h>
int main()
{
    int num1, num2, sum;

     //Read two numbers from user

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    /* Adding both number */
    sum = num1 + num2;

    /* Prints the sum of two numbers */
    printf("The sum is : %d", sum);
    return 0;
}
