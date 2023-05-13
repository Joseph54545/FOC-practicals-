#include <stdio.h>
#include <math.h>

double exp_series(double x) {
   double result = 1.0, term = 1.0;
   int n = 1;

   while (fabs(term) > 1e-8) { // stop when the term is small enough
      term *= (-x / n); // the "-x" is specific for e^-x
      result += term;
      n++;
   }

   return result;
}

int main() {
   double x;

   printf("Enter the value of x: ");
   scanf("%lf", &x);

   printf("e^(-%lf) = %lf\n", x, exp_series(x));
   return 0;
}