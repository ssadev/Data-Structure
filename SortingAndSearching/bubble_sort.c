#include <stdio.h>
#define N 100

int main(){
    int a[N], n, i, j, temp;
    printf("Array Len: ");
    scanf("%d", &n);

    for(i=0; i<n; i++){
        printf("Enter Element Value: ");
        scanf("%d", &a[i]);
    }
    
    printf("Unshorted Array: ");
    for(i=0; i<n; i++){
        printf("%d, ", a[i]);
    }
    
    for(i=0; i<n; i++){
        for(j=i+1; j<n; j++){
            if(a[j]<a[i]){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    printf("\nShorted Array: ");
    for(i=0; i<n; i++){
        printf("%d, ", a[i]);
    }
    
    printf("\n");
    return 0;
}