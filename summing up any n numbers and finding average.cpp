#include <stdio.h>

int main() {
    int n, i, num;
    float sum = 0, avg;
    
    printf("Enter the total number of elements: ");
    scanf("%d", &n);

    for(i=0; i<n; i++) {
        printf("Enter element %d: ", i+1);
        scanf("%d", &num);
        sum += num;
    }

    avg = sum / n;

    printf("Sum = %.2f\n", sum);
    printf("Average = %.2f", avg);
	return 0;
}