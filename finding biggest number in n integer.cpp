#include <stdio.h>

int main() {
   int n, i, num;
   int largest = 0; 

   printf("Enter the value of n: ");
   scanf("%d", &n);

   for (i = 0; i < n; i++) {
      printf("Enter an integer: ");
      scanf("%d", &num);

      if (num > largest) {
         largest = num; 
      }
   }

   printf("The largest integer is %d\n", largest);
   return 0;
}