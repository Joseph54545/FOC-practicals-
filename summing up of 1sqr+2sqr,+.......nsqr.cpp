#include <stdio.h>

int main() 
{
   int n, i, sum = 0;
   printf("Enter the value of n: ");
   scanf("%d", &n);

   for (i = 1; i <= n; i++)
   {
      sum += i*i;
   }

   printf("The sum of squares from 1^2 to %d^2 is %d\n", n, sum);
   return 0;
}