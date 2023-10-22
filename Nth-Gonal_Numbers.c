#include <stdio.h>

    int poly, n, num;

int main() {

    printf("Polygonal Numbers\n");
    printf("Pth Polygonal Number: ");
    scanf("%d", &poly);
    printf("N amount of number: ");
    scanf("%d", &n);
    
    printf("These are the %d %d-gonal numbers: ", n, poly);

    for(int i=1; i<=n; i++) {
        
        num = (poly - 2)*(i*(i-1))/2;
        
        if(poly - 2 <=0) {
            printf("Invalid!");
        } else {
            num += i;
            printf("%d ", num);
        }
    }
}