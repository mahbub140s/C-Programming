// Celsius to Fahrenheit
#include<stdio.h>
int main()
{
    float celsius, fahrenheit;

    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9 / 5) + 32;

    printf("The Fahrenheit is: %.2f", fahrenheit);

    return 0;
}

/* Output:
Enter temperature in Celsius: 100
The Fahrenheit is: 212.00
*/
