// Days to years, weeks and days
#include<stdio.h>
int main()
{
    int days, years, weeks;

    printf("Enter days: ");
    scanf("%d", &days);

    years = (days / 365);   // Ignoring leap year
    weeks = (days % 365) / 7;
    days  = days - ((years * 365) + (weeks * 7));


    printf("Years: %d\n", years);
    printf("Weeks: %d\n", weeks);
    printf("Days: %d", days);

    return 0;
}

/* Output:
Enter days: 373
Years: 1
Weeks: 1
Days: 1
*/
