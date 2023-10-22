#include <stdio.h>

int num, rem;

int main() {
    printf("Prime Number\n");
    printf("Input Number: ");
    scanf("%d", &num);

    for(int i=2; i<=num; i++) {
        for(int j=2; j<i; j++) {
            rem = i%j;

            if(rem == 0) {
                break;
            }
        }
        if(rem != 0 || i == 2) {
        printf("%d ", i);
        }
    }
}
