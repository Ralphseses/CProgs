//Pythagorean Triples

#include <stdio.h>

int x,y,z,num;

int main() {
    printf("Input Triple Limit: ");
    scanf("%d", &num);

    int counter = 0;
    
    for(int i=1; i<=num; i++) {
        x = i*i;
        int f = x;
        for(int j=1; j<=i; j++) {
            y = j*j;
            int diff = f-y;
            for(int k=1; k<=j; k++) {
                z = k*k;
                if(z==diff) {
                    printf("%d, %d, %d\n", z/k, y/j, x/i);
                    counter++;
                }
            }
        }
    } printf("There are %d Pythagorean Triples under limit of %d.", counter, num);
    return 0;
}
