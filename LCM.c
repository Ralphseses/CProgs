#include <stdio.h>

    int n1, n2;
    
int main(void) {
    printf("Please input positive integers!\n");
    
    while(n1<=0) {
        printf("First number: ");
        scanf("%d", &n1);
    }
    while(n2<=0) {
        printf("Second number: ");
        scanf("%d", &n2);
    }
    
    int copy1 = n1;
    int copy2 = n2;
    
    if(n1>n2) {
        copy2 = n1;
        n1 = n2;
        copy1 = n2;
        n2 = copy2;
    }
    
    while(n1<n2) {
        n1 += copy1;
        if(n2<n1) {
            n2 += copy2;
        }
    } 
        printf("LCM of %d & %d: %d", copy1, copy2, n1);
}