#include <stdio.h>
#define N 100

int main(){
    int a[N], n, i, j, temp;
    printf("Array Len: ");
    scanf("%d", &n);

    for ( i = 0; i < n; i++)
    {
        printf("Enter value for a[%d]:", i);
        scanf("%d", &a[i]);
    }
    printf("Unsorted Array: \n");
    for (i = 0; i < n; i++)
    {
        printf("%d, ", a[i]);
    }

    for(i=1; i<n; i++){
        temp = a[i];
        j = i-1;
        while (j>=0 && a[j]>temp)
        {
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = temp;
    }

    printf("\nSorted Array: \n");
    for (i = 0; i < n; i++)
    {
        printf("%d, ", a[i]);
    }
    
    
    printf("\n");
    return 0;
}