#include <stdio.h>
#define N 100

int main(){
    int n, val, i, a[N];
    printf("Enter Array len: ");
    scanf("%d", &n);
    for(i=0; i<n; i++){
        printf("Enter Value For a[%d]: ", i);
        scanf("%d", &a[i]);
    }

    printf("\n");
    for(i=0; i<n; i++)
        printf("%d, ", a[i]);

    printf("\nSearch Value: ");
    scanf("%d", &val);
    for(i=0; i<n; i++){
        if(a[i]==val){
            printf("Search Result: a[%d] = %d", i, a[i]);
            return 0;
        }
        if(i == (n-1)){
            printf("Search Result Not Found");
        }
    }
    return 0;
}
