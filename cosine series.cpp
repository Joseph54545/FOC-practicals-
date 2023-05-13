#include <stdio.h>
#include <math.h>

double cosine(double x) {
   double result = 1.0, term = 1.0;
   int n = 2, sign = -1;

   while (fabs(term) > 1e-8) { 
      result += term;
      n += 2;
      sign = -sign;
      term = sign * pow(x, n) / tgamma(n);
   }

   return result;
}

int main() {
   double x;

   printf("Enter the value of x (in radians): ");
   scanf("%lf", &x);

   printf("cos(%lf) = %lf\n", x, cosine(x));
   return 0;
}