#include <stdio.h>

int linear_search(int arr[], int n, int target) {
   for (int i = 0; i < n; i++) {
      if (arr[i] == target) {
         return i; 
      }
   }
   return -1;
}

int main() {
   int n, target;

   printf("Enter the size of the array: ");
   scanf("%d", &n);

   int arr[n];
   printf("Enter the elements of the array:\n");
   for (int i = 0; i < n; i++) {
      scanf("%d", &arr[i]);
   }

   printf("Enter the target value: ");
   scanf("%d", &target);

   int result = linear_search(arr, n, target);
   if (result == -1) {
      printf("Target value not found\n");
   } else {
      printf("Target value found at index %d\n", result);
   }
   return 0;
}