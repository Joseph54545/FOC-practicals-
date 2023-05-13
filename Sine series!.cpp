#include <stdio.h>
#include <math.h>

double sine(double x) {
   double result = 0.0, term = x;
   int n = 1, sign = 1;

   while (fabs(term) > 1e-8) { // stop when the term is small enough
      result += term;
      n += 2;
      sign = -sign;
      term = sign * pow(x, n) / tgamma(n+1);
   }

   return result;
}

int main() {
   double x;

   printf("Enter the value of x (in radians): ");
   scanf("%lf", &x);

   printf("sin(%lf) = %lf\n", x, sine(x));
   return 0;
}