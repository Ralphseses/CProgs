#include <stdio.h>

    int n, num, arr[];
    
int main(void) {
    printf("How many number: ");
    scanf("%d", &n);
    
    for(int i=0; i<n; i++) {
        printf("Number %d: ", i+1);
        scanf("%d", &arr[i]);
    }
   
    int counter = 0;
    
    while(counter<=n) {
        for(int j=0; j<n; j++) {
            if(j==(n-1)) {
                continue;
            } else if(arr[j]>arr[j+1]) {
                arr[j] += arr[j+1];
                arr[j+1] = arr[j] - arr[j+1];
                arr[j] -= arr[j+1];
            } else {
                continue;
            }
        } 
        counter++;
    }
    
    for(int k=0; k<n; k++) {
        printf("%d ", arr[k]);
    }
}