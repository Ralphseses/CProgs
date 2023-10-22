#include <stdio.h>

int num, rem;

int main() {

    printf("Prime Factorization\n");
    printf("Input Number: ");
    scanf("%d", &num);

//Prime Generator
do {
    for(int i=2; i<=num; i++) {
        for(int j=2; j<i; j++) {
            rem = i%j;

            if(rem == 0) {
                break;
            }
        }

//Prime Factors
        if(rem != 0 || i == 2){
           
            if(num%i == 0) {
                num /= i;
                printf("%d ", i);
                break;
                } 
            }
        }
    } while (num != 1);
    {
        return 0;
    }
    
}