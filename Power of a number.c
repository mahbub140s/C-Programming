// Power of a number
#include<stdio.h>
#include<math.h> // Used for pow() function
int main()
{
    double base, expo, power;

    printf("Enter base: ");
    scanf("%lf", &base);
    printf("Enter exponent: ");
    scanf("%lf", &expo);

    power = pow(base, expo);

    printf("%.2lf ^ %.2lf = %.2lf", base, expo, power);

    return 0;
}

/* Output
Enter base: 5
Enter exponent: 3
5 ^ 3 = 125
*/
