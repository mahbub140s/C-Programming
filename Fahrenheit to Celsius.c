// Fahrenheit to Celsius
#include<stdio.h>
int main()
{
    float celsius, fahrenheit;

    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);

    celsius = (fahrenheit - 32) * 5 / 9;

    printf("The Celsius is: %.2f", celsius);

    return 0;
}

/* Output:
Enter temperature in Fahrenheit: 205
The Celsius is: 96.11
*/
