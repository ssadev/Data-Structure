#include <stdio.h>
#define N 100

int main(){
    int a[N], n, i, j, minIndex;
    printf("Array Len: ");
    scanf("%d", &n);

    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    //display Unshorted Array
    for(i=0; i<n; i++){
        printf("%d, ", a[i]);
    }

    for (i = 0; i < n-1; i++)
    {
        minIndex = i;
        for (j = i+1; j < n; j++)
        {
            if(a[j]<a[minIndex]){
                minIndex = j;
            }
        }
        int temp = a[i];
        a[i] = a[minIndex];
        a[minIndex] = temp;
    }

    printf("\n");
    //display Unshorted Array
    for(i=0; i<n; i++){
        printf("%d, ", a[i]);
    }
    

    printf("\n");
    return 0;
}