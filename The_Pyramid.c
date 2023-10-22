#include <stdio.h>

    int n;
    
int main(void) {
    printf("How many rows: ");
    scanf("%d", &n);
    printf("Output: \n");
    
    for(int row=1; row<=n; row++) {
        for(int j=1; j<=n; j++) {
            if(j==n || row==n || j==(n-row+1) || (row%3==0 && j>(n-row+1))) 
                printf("* ");
            else if(j<=(n-row))
                printf(" ");
            else
                printf("  ");
        }
        printf("\n");
    }
}