#include <stdio.h>
#define N 100


int main(){
    int a[N], i, j, n, key;
    printf("Array Len:");
    scanf("%d", &n);
    for ( i = 0; i < n; i++)
    {
        printf("Enter Value For a[%d]: ", i);
        scanf("%d", &a[i]);
    }

    for(i=1; i<n; i++){
        key = a[i];
        j = i-1;
        while(j>=0 && a[j]>key){
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = key;

    }

    printf("\nDisplay Sorted Array:\n");
    for(i=0; i<n; i++){
        printf("%d, ", a[i]);
    }

    int data;
    printf("\nEnter New Value: ");
    scanf("%d", &data);
    for(i=1; i<n; i++){
        key = data;
        j = i-1;
        while (j>=0 && a[j]>key)
        {
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = key;
        
    }
    printf("\nDisplay Sorted Array:\n");
    for(i=0; i<n; i++){
        printf("%d, ", a[i]);
    }

    return 0;
}