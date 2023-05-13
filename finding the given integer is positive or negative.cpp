#include <stdio.h>

int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    
    if(num > 0) {
        printf("%d is positive.\n", num);
    } else if(num < 0) {
        printf("%d is negative.\n", num);
    } else {
        printf("You entered 0.\n");
    }
	return 0;
}