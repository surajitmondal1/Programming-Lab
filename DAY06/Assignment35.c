#include <stdio.h>

int main() {
    int start, end, i, j, isPrime;

   
    printf("Enter the starting number of the range: ");
    scanf("%d", &start);

    printf("Enter the ending number of the range: ");
    scanf("%d", &end);

    
    for (i = start; i <= end; i++) {
        if (i < 2) {
            continue; 
        }

        isPrime = 1; 

        
        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                isPrime = 0; 
                break;
            }
        }

        
        if (isPrime == 1) {
            printf("%d \n", i);
        }
    }

    printf("\n");
    return 0;
}

