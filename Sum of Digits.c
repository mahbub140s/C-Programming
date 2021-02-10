// Sum of digits
#include<stdio.h>
int main()
{
   int n, t, sum = 0, remainder;

   printf("Enter an integer: ");
   scanf("%d", &n);

   t = n;

   while (t != 0)
   {
      remainder = t % 10;
      sum       = sum + remainder;
      t         = t / 10;
   }

   printf("Sum of digits: %d", sum);

   return 0;
}
